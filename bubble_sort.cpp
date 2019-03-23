#include<iostream>
using namespace std;
void bubble_sort(int a[],int n,int i )
{
	if(i==n-1)
	{
		return;
	}
	if(a[i]>a[i+1])
	{
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	//		bubble_sort(a,n,i+1);
		//	return;
		
	}
	
			bubble_sort(a,n,i+1);
		


	bubble_sort(a,n-1,i);
	

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
	bubble_sort(a,n,i);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
