#include<iostream>
#include<vector>

using namespace std;


void Subset(int index, int a[],int n, vector<int>curr, vector<vector<int>>&ans)
{
    //Base Case
    if(index==n){
        ans.push_back(curr);
        return;
    }

    Subset(index+1,a,n, curr , ans);
    curr.push_back(a[index]);
    Subset(index+1, a,n, curr , ans);
}
int main()
{
    int a[10];
    vector<int>curr;
    vector<vector<int>>ans;
    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    Subset(0,a,n,curr,ans);

    for(auto vec: ans)
    {
        for(auto ele: vec)
            cout<<ele<<" ";
        cout<<endl;
    }
}