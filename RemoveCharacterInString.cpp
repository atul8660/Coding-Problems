#include<iostream>
#include<string.h>
using namespace std;

void Remove(char str[])
{
    int l=strlen(str);
    if(l==0) return ;
    if(str[0]=='x')
    {
        for(int i=0;i<l;i++)
            str[i]=str[i+1];
        Remove(str);
    }
    else
     Remove(str+1);
}
int main()
{
    char str[10];
    cout<<"Enter any String"<<endl;
    cin>>str;
    Remove(str);
    cout<<str;
}