#include <iostream>
using namespace std;
int main(){
    int x=5;
    float y=7.8;

    int* ptr=&x;
    float *ptrf =&y;
    cout<<ptr<<endl;
    cout<<ptrf<<endl;
}