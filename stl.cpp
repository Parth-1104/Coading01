
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    // cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    // cout<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    rotate(v.begin(),v.begin()+2,v.end());
    for(int i : v)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    sort(v.begin(),v.end());
     for(int i : v)
    {
        cout<<i<<" ";
    }



    
    
}