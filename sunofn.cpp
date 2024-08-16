#include <iostream>
using namespace std;

int sumofn(int n)
{
    int sum=0;

    if(n==0) return 0;

    sum= n + sumofn(n-1);
    
    return sum;
}


int main()
{
    int n;
    cin>>n;
    int result=sumofn(n);

    cout<<result;
    return 0;
}
