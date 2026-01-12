#include<iostream>
using namespace std;

void Reverse(int a[], int size)
{
    if(size==0||size==1) return;

    int temp=a[0];
    a[0]=a[size-1];
    a[size-1]=temp;

    return Reverse(a+1,size-2);
}
int main()
{
    int a[]={10,20,30,40,50};
    int size=5;
    Reverse(a,size);
    int i=0;
    while(i<size)
    {   
        cout<<a[i++]<<endl;
    }
}