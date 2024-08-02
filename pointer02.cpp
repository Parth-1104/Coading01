#include <iostream>
using namespace std;
void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;

}

int main()
{
    int x=5;
    int y=78;

    int *ptr=&x;
    int *ptr2=&y;


    swap(ptr,ptr2);
    cout<<x<<" "<<y;
    return 0;
}