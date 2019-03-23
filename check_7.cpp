#include<iostream>
using namespace std;
bool check_7(int a[],int n,int index)
{
	if(index==n)
	{
		return(false);
	}
	if(a[index]==7)
	{
		return(true);
	}
	bool ans=check_7(a,n,index+1);
	return ans;
}

int  find_7(int a[],int n,int index)
{
	if(index==n)
	{
		return(-1);
	}
	if(a[index]==7)
	{
		return(index);
	}
	int ans=find_7(a,n,index+1);
	return ans;
}
int  find_last_7(int a[],int n,int index)
{
	if(index==n)
	{
		return (-1);
	}
	int r=find_last_7(a,n,index+1);
	if(r==-1&&a[index]!=7)
	{
		return(-1);
	}
	else if(r!=-1)
	{
		return(r);
	}
	return(index);
}
void all_7(int a[],int n,int index)
{
	if(index==n)
	{
		return;
	}
	if(a[index]==7)
	{
		cout<<index<<" ";
	}
		all_7(a,n,index+1);
}

void all_7_reverse(int a[],int n,int index)
{
	if(index==n)
	{
		return;
	}
	all_7_reverse(a,n,index+1);
	if(a[index]==7)
	{
		cout<<index<<" ";
	}
		
}
int main()
{
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index=0;
	bool ans=check_7(a,n,index);
	cout<<ans<<endl;
	int ans2=find_7(a,n,index);
	cout<<ans2<<endl;
	int ans3=find_last_7(a,n,index);
	cout<<ans3<<endl;
	all_7(a,n,index);
	cout<<endl;
	all_7_reverse(a,n,index);
}
