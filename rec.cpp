#include <iostream>
using namespace std;

int factorial(int a)
{
    int ans=1;

    if (a==0 ||a==1) return 1;

    ans = a*factorial(a-1);

    return ans;

}


int main()
{
   
    cout<<factorial(5);
    return 0;
}