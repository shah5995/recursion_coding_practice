#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
	if(n==1)
	{
		return;
	}
	for(int j=0;j<=n-2;j++)
	{
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
		
	}
	
	bubble_sort(a,n-1);
}
void bubble_sort2(int a[],int j,int n)
{
	cout<<"shah";
	if(n==1)
	{
		return;
	}
	if(j==n-1)
	{
	   return	bubble_sort2(a,0,n-1);
	}
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);
	}
	bubble_sort2(a,j+1,n);
}
int main()
{
	int a[10]={5,4,1,2,3};
		bubble_sort2(a,0,5);
		for(int i=0;i<5;i++)
		{
			cout<<a[i];
		}
}
