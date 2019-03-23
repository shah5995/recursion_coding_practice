#include<iostream>
using namespace std;
void subset_sum(int arr[],int index,int n,int k,int b[],int sum,int b_index)
{
	if(index>n)
	{
		return;
	}
	if(sum>k)
	{
		return;
	}
	if(sum==k)
	{
	//	b[b_index]=arr[index];
	//	cout<<"shah";
		for(int i=0;i<b_index;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=index;i<n;i++)
	{
		
		b[b_index]=arr[i];
		subset_sum(arr,i+1,n,k,b,sum+arr[i],b_index+1);
	}

}
int main()
{
	int n,arr[100],b[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int k;
	cin>>k;
	subset_sum(arr,0,n,k,b,0,0);
}
