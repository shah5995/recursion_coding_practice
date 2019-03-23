#include<iostream>
using namespace std;
void merge(int c[],int a[],int b[],int n1,int n2)
{
	//int *c;
	int j=0;int k=0;
	for(int i=0;i<(n1+n2);i++)
	{
		if(j==n1)
		{
			while(k!=n2)
			{
				c[i++]=b[k++];
			}
		}
		else if(k==n2)
		{
			while(j!=n1)
			{
				c[i++]=a[j++];
			}
		}
		else if(a[j]>b[k])
		{
			c[i]=b[k];
			k++;
		}
		else
		{
			c[i]=a[j++];
		}
	
	}
	
	
	

}
void merge(int a[],int start,int end,int mid)
{
	int temp[100];
	int start1=start;
	int end1=mid;
	int end2=end;
	int start2=mid+1;
	int i=0;
	int j=start1;int k=start2;
	while(j<=end1 && k<=end2)
	{
		if(a[j]>a[k])
		{
			temp[i++]=a[k++];
		}
		else
		{
			temp[i++]=a[j++];
		}
	}
	
		while(k<=end2)
		{
			temp[i++]=a[k++];
		}
{
		while(j<=end1)
		{
			temp[i++]=a[j++];
		}
		
	}
	for(int j=0;j<i;j++)
	{
		a[start++]=temp[j];
	//	cout<<a[i]<<" ";
	}
	
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
	merge(a,start,end,mid);
	
}
int main()
{
//	int a[10]={2,4,6,8};
	int b[10]={1,3,9,10,11};
	
	
	int a[20]={10,9,7,6,5,0,34,9};
	mergesort(a,0,7);
	
	for(int i=0;i<9;i++)
	{
		cout<<a[i]<<"      ";
	}
}
