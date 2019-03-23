#include<iostream>
using namespace std;
bool is_sorted(int a[],int n,int index)
{
	if(index==n-1)
	{
		return(true);
	}
	bool r=is_sorted(a,n,index+1);
	if(r==true&&a[index]<a[index+1])
	{
		return true;
	}
	int temp=	a[index];
	a[index]=a[index+1];
	a[index+1]=temp;
		bool m=is_sorted(a,n,index+1);
		return m;
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
	int index=0;
	bool done=is_sorted(a,n,index);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
