#include <iostream>
using namespace std;
int si()
{
    int p,r,t,ans;
    cout<<" enter p "<<endl;
    cin>>p;
    cout<<" enter t"<<endl;
    cin>>t;
    if(t>3)
    {
         ans = p*t*18/100;
          
    }
    else
    {
         ans=p*t*15/100;
          
    }
  
    return ans;

}
int main()
{
    cout<<si()<<endl;
}
