#include<iostream>
using namespace std;
void pattern(char a[10][10],int n,int index)
{
	if(index==n-1)
	{
		return;
	}
	char r;
	if(index%2==0)
	{
		r='0';
	}
	else 
	{
		r='*';
	}
	int i,j;
	for(j=index,i=index;j<n-index;j++)
	{
		a[i][j]=r;
	}
	for(i=index,j=n-index-1;i<n-index-1;i++)
	{
		a[i][j]=r;
	}
	for(int j=n-1-index,i=n-1-index;j>=index;j--)
	{
		a[i][j]=r;
	}
	for(int i=n-1-index,j=index;i>index;i--)
	{
		a[i][j]=r;
	}
	pattern(a,n,index+1);
	
}
int main()
{
	int n;
	cin>>n;
	char a[10][10]={0};
	int index=0;
	pattern(a,n,0);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}
