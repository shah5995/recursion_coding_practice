#include<iostream>
using namespace std;
bool is_safe(char path[1000][1000],int i,int j,int n,int m)
{
//	cout<<path[i][j]<<endl;

	if(path[i][j]=='X'||i>n||j>m)
	{
		return false;
	}
	
//	cout<<"faisal";
	return true;
	
}
bool mazepath(int a[][1000],char path[][1000],int i,int j,int n,int m)
{
			
	
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
	
	if(i>n||j>m)
	{
		return false;
	}
	
	if(is_safe(path,i,j+1,n,m))
	{
		a[i][j+1]=1;
		bool right=	mazepath(a,path,i,j+1,n,m);
		if(right)
		{
			return true; 
		}
		a[i][j+1]=0;
	}
	if(is_safe(path,i+1,j,n,m))
	{
		a[i+1][j]=1;
		bool down=	mazepath(a,path,i+1,j,n,m);
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
	int a[1000][1000]={0};
	char path[1000][1000];
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
 bool ans=	mazepath(a,path,1,1,n,m);
 if(!ans)
 {
 	cout<<"no path found";
 }
	
	
}
