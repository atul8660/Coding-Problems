#include<stdio.h>
int findSum(int a[],int n)
{
    int sum=0;
    if(n==0)
        return 0;
    return a[0]+findSum(a+1,n-1);
}
int main()
{
    int a[]={10,20,30,40,50};
    int n=5;
    printf("%d",findSum(a,n));

}