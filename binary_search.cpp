#include<iostream>
using namespace std;
bool bs(int a[],int t,int start,int end)
{
	if(start>end)
	{
		cout<<"not found";
		return false ;
	}
	int r=(start+end)/2;
	if(t==a[r])
	{
		cout<<"found at"<<r;
		return true;
	}
	 
	else if(t>a[r])
	{
		start=r+1;
		
		
	}
	else if(t<a[r])
	{
		end=r-1;
	}
bool b=	bs(a,t,start,end);
return b;
	
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
	int t;
	cin>>t;
	int start=0;int end=n-1;
bool b=	bs(a,t,start,end);
	cout<<b;
}
