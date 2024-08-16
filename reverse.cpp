#include <iostream>
using namespace std;

void reverse(int a)
{
    if(a>0)
    {
    int ans= a%10;
    cout<<ans;
    reverse(a/10);
    }


}

int main()
{
    int n;
    cin>>n;
    reverse(34567);
    return 0;
}