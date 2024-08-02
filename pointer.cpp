#include <iostream>
using namespace std;
int main(){
    int x=5;
    float y=7.8;

    int* ptr=&x;
    float *ptrf =&y;
    cout<<*ptr<<endl;

    x=23;
    cout<<"Updatedvalue "<<*ptr<<endl;
    *ptr=69;
    cout<<*ptr<<endl;
    cout<<x<<endl;
    cout<<&ptr<<endl;





    cout<<ptrf<<endl;
}