#include<iostream>
using namespace std;
#include<cmath>
bool can_place(int matrix[][9],int i,int j,int number,int n)
{
    for(int x=0;x<n;x++)
    {
        if(matrix[x][j]==number||matrix[i][x]==number)
        {
            return false;
        }
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for(int x=sx;x<sx+rn;x++)
    {
        for(int y=sy;y<sy+rn;y++)
        {
            if(matrix[x][y]==number)
            {
                return false;
            }
        }
    }
    return true;
}
bool solve_suduko(int matrix[][9],int i,int j,int n)
{
    if(i==n)
    {
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<n;y++)
            {
                cout<<matrix[x][y]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    if(j==n)
    {
        return solve_suduko(matrix,i+1,0,n);
    }
    if(matrix[i][j]!=0)
    {
        return solve_suduko(matrix,i,j+1,n);
    }
    for(int number=1;number<=n;number++)
    {
        if(can_place(matrix,i,j,number,n))
        {
            matrix[i][j]=number;
            bool solved_further=solve_suduko(matrix,i,j+1,n);
            if(solved_further)
            {
                return true;
            }
        }
    }
    matrix[i][j]=0;
    return false;
}
int main() {
    int n;
    cin>>n;
    int matrix[9][9];
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>matrix[i][j];
        }
    }
   // cout<<endl<<endl;
    solve_suduko(matrix,0,0,n);
	return 0;
}
