#include<iostream>
using namespace std;
bool is_safe(char path[15][15],int i,int j,int n,int m,bool checked[][15])
{
//	cout<<path[i][j]<<endl;

	if(path[i][j]=='X'||i>n||j>m||i<1||j<1)
	{
		return false;
	}
	if(checked[i][j]==true)
	{
		return false;
	}
	
//	cout<<"faisal";
	return true;
	
}
bool mazepath(int a[][15],char path[][15],int i,int j,int n,int m,bool checked[][15])
{
		checked[i][j]=true;	
	if(i==n&&j==m)
	{
	//	cout<<"shah";
			for(int k=1;k<=n;k++)
	{
		for(int l=1;l<=m;l++)
		{
			cout<<a[k][l]<<" ";
		}
		cout<<endl;
	}
		return true ;
	}
	
	if(i>n||j>m||i<1||j<1)
	{
		return false;
	}
		if(is_safe(path,i,j-1,n,m,checked))
	{
		a[i][j-1]=1;
		bool left=	mazepath(a,path,i,j-1,n,m,checked);
		if(left)
		{
			return true;
		}
		a[i][j-1]=0;
	}
	
	if(is_safe(path,i,j+1,n,m,checked))
	{
		a[i][j+1]=1;
		bool right=	mazepath(a,path,i,j+1,n,m,checked);
		if(right)
		{
			return true; 
		}
		a[i][j+1]=0;
	}
		if(is_safe(path,i-1,j,n,m,checked))
	{
		a[i-1][j]=1;
		bool up=	mazepath(a,path,i-1,j,n,m,checked);
		if(up)
		{
			return true;
		}
		a[i-1][j]=0;
	}
	if(is_safe(path,i+1,j,n,m,checked))
	{
		a[i+1][j]=1;
		bool down=	mazepath(a,path,i+1,j,n,m,checked);
		if(down)
		{
			return true;
		}
		a[i+1][j]=0;
	}
	
	
	
	return false;
}/*
0 x 0 0
0 0 x 0 
x 0 0 x
x 0 0 x
x x 0 0 */
int main()
{
	int a[15][15]={0};
	char path[15][15];
	bool checked[15][15]={0};
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>path[i][j];
		}
	}
	
	
	a[1][1]=1;
 bool ans=	mazepath(a,path,1,1,n,m,checked);
 if(!ans)
 {
 	cout<<"NO PATH FOUND";
 }
	
	
}
