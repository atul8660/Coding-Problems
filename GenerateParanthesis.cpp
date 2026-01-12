#include<iostream>
using namespace std;

void Generate(string tillnow, int open, int close)
{
    if(open==0 && close==0) 
    {
        cout<<tillnow<<endl;
        return;
    }

    if(open>0)
    Generate(tillnow + "(" , open-1, close);

    if(close>0 && open<close)
    Generate(tillnow + ")" , open , close-1);
}
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;

    Generate("",n,n);
}