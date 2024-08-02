#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v)
{
    int s=0,e=v.size()-1;
    while(s<e)
    {
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v)
{
    for(int i: v)
    {
        cout<<i<<endl;
    }
}

int main()
{
    vector<int>v;
    v.push_back(11);
    v.push_back(10);
    v.push_back(9);
    v.push_back(101);
    v.push_back(116);

    cout<<"vector before reversing"<<endl;
    print(v);
    vector<int> ans=reverse(v);
    cout<<"vector after reversing"<<endl;
    print(ans);

    return 0;

}