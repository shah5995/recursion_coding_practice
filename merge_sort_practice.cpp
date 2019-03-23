#include<iostream>
using namespace std;
void merge(int a[],int start,int end)
{
	int start1=start;
	int start2=(start+end)/2 +1;
	int end1=(start+end)/2;
	int end2=end;
	int temp[20];
	int k=0;
	while(start1<=end1&&start2<=end2)
	{
		if(a[start1]>a[start2])
		{
			temp[k++]=a[start2++];
		}
		else
		{
			temp[k++]=a[start1++];
		}
		
	}
	
		while(start2<=end2)
		{
			temp[k++]=a[start2++];
		}
			
		while(start1<=end1)
		{
			temp[k++]=a[start1++];
		}
	
	for(int i=0;i<k;i++)
	{
	
		a[start++]=temp[i];
	}

	return;
}
void mergesort(int a[],int start,int end)
{
	if(start>=end)
	{
	
		return;
	}
	int mid=(start+end)/2;
	mergesort(a,start,mid);
	mergesort(a,mid+1,end);
	merge(a,start,end);
	return;
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
	int start=0;
	int end=n-1;
	mergesort(a,start,end);
		for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
