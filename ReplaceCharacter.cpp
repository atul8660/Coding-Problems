#include<iostream>
#include<string.h>
using namespace std;

void Replace(char str[], char str1[], int length)
{
    if(length==0) return;

    if(str[0]=='x')
    {
        str1[0]='a';
        str1[1]='b';
        str1[2]='c';

        Replace(str+1,str1+3,length-1);
    }
    else
    {
        str1[0]=str[0];
        Replace(str+1,str1+1,length-1);
    }
    
}
int main()
{
    char str[10];

    cout<<"Enter a String "<<endl;
    cin>>str;
    int count=0,i=0;
    int length=strlen(str);

    while(i<length)
    {
        if(str[i++]=='x')
            count++;
    }

    int size=(length+count*2)+1;
    char str1[size];
    Replace(str,str1,length);

    for(int j=0;j<size-1;j++)
    {
        cout<<str1[j];
    }
}