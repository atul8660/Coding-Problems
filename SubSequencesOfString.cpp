
/// Not understood properly


#include<iostream>
#include<string.h>
using namespace std;

void Subseq(string original, string tillnow)
{
    if(original.size()==0)
    {
        cout<<tillnow<<endl;
        return;
    }

    
    Subseq(original.substr(1),tillnow);
    Subseq(original.substr(1),tillnow+original[0]);


}
int main()
{

    string original;
    cout<<"Enter a String"<<endl;
    cin>>original;

    Subseq(original,"");
}