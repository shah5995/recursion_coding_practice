#include<iostream>
using namespace std;
void split(int arr[],int arr1[],int arr2[],int n,int index1,int index2,int index)
{
	if(index==n)
	{
	//	cout<<"shah";
		int sum1,sum2;
		sum1=sum2=0;
		for(int i=0;i<index1;i++)
		{
			sum1=sum1+arr1[i];
		}
		
		for(int i=0;i<index2;i++)
		{
			sum2=sum2+arr2[i];
		}
	//	cout<<sum1<<sum2;
		if(sum1==sum2)
		{
			for(int i=0;i<index1;i++)
		{
			cout<<" "<<arr1[i]<<"";
		}
		cout<<" and";
		for(int i=0;i<index2;i++)
		{
			cout<<" "<<arr2[i]<<"";
		}	
		cout<<endl;
	//	cout<<"faisal";
	
		}
			return;
	}
	arr1[index1]=arr[index];
	
	split(arr,arr1,arr2,n,index1+1,index2,index+1);
	arr2[index2]=arr[index];
		
	split(arr,arr1,arr2,n,index1,index2+1,index+1);
}
int split2(int arr[],int arr1[],int arr2[],int n,int index1,int index2,int index)
{
	if(index==n)
	{
	//	cout<<"shah";
		int sum1,sum2;
		sum1=sum2=0;
		for(int i=0;i<index1;i++)
		{
			sum1=sum1+arr1[i];
		}
		
		for(int i=0;i<index2;i++)
		{
			sum2=sum2+arr2[i];
		}
	//	cout<<sum1<<sum2;
		if(sum1==sum2)
		{
		
		return 1;
	//	cout<<"faisal";
	
		}
			return 0;
	}
	arr1[index1]=arr[index];
	int c=0;
	c=c+split2(arr,arr1,arr2,n,index1+1,index2,index+1);
	arr2[index2]=arr[index];
		
	c=c+split2(arr,arr1,arr2,n,index1,index2+1,index+1);
	return c;
}
int main()
{
	int n,arr[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int arr1[1000],arr2[1000];
	arr1[1000]={0};
	arr2[1000]={0};
	cout<<split2(arr,arr1,arr2,n,0,0,0)<<endl;
	split(arr,arr1,arr2,n,0,0,0);
}
