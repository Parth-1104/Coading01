#include <iostream>
using namespace std;

class Base {
private:
    int privateVar = 1;  // Accessible only within the Base class
protected:
    int protectedVar = 2;  // Accessible within Base class and derived classes
public:
    int publicVar = 3;  // Accessible from anywhere

    // Function to demonstrate private access
    void showPrivateVar() {
        cout << "Base Private Variable: " << privateVar << endl;
    }
};

class DerivedPublic : public Base {
public:
    void showVars() {
        // cout << "Private Variable: " << privateVar << endl; // Not accessible

        cout<<"publicly calling  "<<endl;
        cout << "Protected Variable: " << protectedVar << endl;  // Accessible
        cout << "Public Variable: " << publicVar << endl;  // Accessible
    }
};

class DerivedProtected : protected Base {
public:
    void showVars() {
        // cout << "Private Variable: " << privateVar << endl; // Not accessible
        cout << "Protected Variable: " << protectedVar << endl;  // Accessible
        cout << "Public Variable: " << publicVar << endl;  // Accessible
    }
};

class DerivedPrivate : private Base {
public:
    void showVars() {
        // cout << "Private Variable: " << privateVar << endl; // Not accessible
        cout << "Protected Variable: " << protectedVar << endl;  // Accessible
        cout << "Public Variable: " << publicVar << endl;  // Accessible
    }
};

int main() {
    DerivedPublic objPublic;
    objPublic.showVars();
    // objPublic.protectedVar; // Error: protectedVar is protected
    // objPublic.privateVar; // Error: privateVar is private
    cout << "Public Variable: " << objPublic.publicVar << endl;  // Accessible

    DerivedProtected objProtected;
    objProtected.showVars();
    // objProtected.publicVar; // Error: publicVar is protected now

    DerivedPrivate objPrivate;
    objPrivate.showVars();
    // objPrivate.publicVar; // Error: publicVar is private now

    return 0;
}
