#include<iostream>
using namespace std;
void bubble_sort(int a[],int n,int index)
{
	if(n==0||n==1)
	{
		return;
	}
	
	if(index==n-1)
	{
		bubble_sort(a,n-1,0)
		;return;
	}
	if(a[index]>a[index+1])
	{
	int temp=a[index];
	a[index]=a[index+1];
	a[index+1]=temp;	
	}
	bubble_sort(a,n,index+1);
	return;
}
int main()
{
	int n;
	cin>>n;int a[20];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int index;
	bubble_sort(a,n,index);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
