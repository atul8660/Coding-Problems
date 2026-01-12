#include<iostream>
using namespace std;

void gen(int index, string input, string output, string map[])
{
    if(index==input.size())
    {
        cout<<output<<endl;
        return ;
    }
    
    int x=input[index]-'0'; // extract kar lia 2 ko "234" main se
    string val=map[x];
    if(val.size()==0)
    {
        gen(index + 1, input, output, map);
    }
    else
    {
        for(int i=0;i<val.size();i++)
        {
            gen(index + 1, input , output + val[i], map);
        }
    }

}

int main()
{
    string map[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string input;
    cin>>input;
    
    string output="";
    
    gen(0,input,output,map);
}