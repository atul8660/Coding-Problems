#include<iostream>
using namespace std;

bool issafe(int row , int col , int n , int arr[][20] , int vis[][20])
{
    if(row>=0 && row<n && col>=0 && col<n)
    {
        if(arr[row][col] == 1 && vis[row][col] == 0)
            return true;
    }
    return false;
}


void solve(int row, int col , int n, int arr[][20], int vis[][20])
{

    if(row<0 || col<0 || row>=n || col>=n || vis[row][col]==1)
        return;
    if(row==n-1 && col==n-1)
    {
        vis[row][col]=1;

        for(int i=0 ; i<n ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cout<<vis[i][j]<<" ";
            }
            cout<<endl;

        }

        cout<<endl;
        vis[row][col]=0;
    }

    // Down 
    if(issafe(row+1,col,n,arr,vis))
    {
        vis[row][col]=1;
        solve(row+1,col,n,arr,vis);
        vis[row][col]=0;
    }


    // Up
    if(issafe(row-1,col,n,arr,vis))
    {
        vis[row][col]=1;
        solve(row-1,col,n,arr,vis);
        vis[row][col]=0;
    }


    // Right
    if(issafe(row,col+1,n,arr,vis))
    {
        vis[row][col]=1;
        solve(row,col+1,n,arr,vis);
        vis[row][col]=0;
    }

    // Left
    if(issafe(row,col-1,n,arr,vis))
    {
        vis[row][col]=1;
        solve(row,col-1,n,arr,vis);
        vis[row][col]=0;
    }
}

int main()
{
    int arr[20][20]={{1,1,0},{1,1,0},{0,1,1}};
    int vis[20][20]={{0}};

    int n;
    cout<<"Enter Any Number"<<endl;
    cin>>n;

    if(arr[0][0]==0)
    return 0;
    if(arr[n-1][n-1]==0)
    return 0;

    solve(0,0,n,arr,vis);
    return 0;
}