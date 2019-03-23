#include<iostream>
using namespace std;
void find_subarray(int a[],int n,int total,int index)
{
	if(index==n)
	{
		return;
	}
			if(total<0)
		{
			return;
		}
		
	for(int i=index;i<n;i++)
	{
		int sum=a[i];
	
	
	
		
		find_subarray(a,n,total-sum,index+1);
		if(total==0)
		{
			cout<<"shah";
			return;
		}	
	}
	
}
int main()
{
	int n;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int total;
	cin>>total;
	find_subarray(a,n,total,0);
}
