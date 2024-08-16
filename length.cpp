#include <iostream>
using namespace std;

int lengthname(string str)
{

    if(str=="") return 0;

    return 1+lengthname(str.substr(1));


}

int main()
{
    string s;
    cin>>s;
    int l=lengthname(s);
    cout<<l;
    return 0;

}