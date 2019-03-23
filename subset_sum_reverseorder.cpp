#include<iostream>
using namespace std;
int p=0;
void subset_sum(int arr[],int index,int n,int k,int b[][100],int sum,int b_index)
{
	if(sum==k)
	{
	//	b[b_index]=arr[index];
	//	cout<<"shah";
		for(int i=0;i<b_index;i++)
		{
			cout<<b[p][i]<<" ";
		}
		p++;
		cout<<endl;
		return;
	}
	if(index<0)
	{
		return;
	}
	if(sum>k)
	{
		return;
	}
	
	for(int i=index;i>=0;i--)
	{
		
		b[p][b_index]=arr[i];
		subset_sum(arr,i-1,n,k,b,sum+arr[i],b_index+1);
	}

}
void subset2(int arr[],int i,int k,int n,int output[],int j)
{
	if(i==n)
	{
		
		int sum=0;
		for(int x=0;x<j;x++)
		{
			sum=sum+output[x];
		}
		if(sum==k)
		{
			//cout<<sum;
			for(int x=j-1;x>=0;x--)
			{
				cout<<output[x]<<" ";
			}
			cout<<endl;
		}
		return;
	}



	subset2(arr,i+1,k,n,output,j);
	output[j]=arr[i];
	subset2(arr,i+1,k,n,output,j+1);
	
}
int main()
{
	int n,arr[100],b[100][100],output[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int k;
	cin>>k;
	subset2(arr,0,k,n,output,0);
//	subset_sum(arr,n-1,n,k,b,0,0);
	
}
