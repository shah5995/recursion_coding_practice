#include<iostream>
using namespace std;
int move(int m,int n,int i,int j)
{
	if(i==m-1&&j==n-1)
	{
		return 1;
	}
	else if(i>m)
	{
		return 0;
	}
	else if(j>n)
	{
		return 0;
	}
	int sum=0;
	sum=sum+move(m,n,i+1,j);
	sum=sum=sum+move(m,n,i,j+1);
	return sum;                         
	
}
int main()
{
	int m, n;
	cin>>m>>n;
	int count=move(m,n,0,0);
	cout<<"total possible ways    ";
	cout<<count;
	
}
