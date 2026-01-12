#include<iostream>
using namespace std;

int findSort(int a[],int size)
{
    if(size==0 || size==1)return 1;

    if(a[0]>a[1]) return -1;

    return findSort(a+1,size-1);
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=5;
    cout<<"The given Array Is "<<findSort(a,size);
}