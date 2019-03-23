#include<iostream>
using namespace std;
int sum(int a[],int n,int total,int i)
{
	if(i==n)
	{
		return 0;
	}
	int r=a[i];
	if(r==total)
	{
			cout<<r<<" ";
			
	
		cout<<endl;
		
	}
	r=r+sum(a,n,total,i+1);
		if(r==total)
	{
		//cout<<endl;
		int p=a[i];
		for(int k=i;p<=total;k++)
		{
			cout<<a[k]<<" ";
			p=p+a[k+1];
		}
		cout<<endl;
		return a[i];
	}
	else if(r<total)
	{
		return r;
	}
	return(a[i]);
	
}
int main()
{
	int n;
	cin>>n;
	int a[20];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int i=0;
	int total;
    cin>>total;
	int r=sum(a,n,total,i);
}
