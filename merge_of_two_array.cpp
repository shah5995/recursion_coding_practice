#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int end)
{
	int i=start;
	int j=mid+1;
	int end1=mid+1;
	int end2=end+1;
	int s[10];
	int k=0;
//	cout<<i<<j<<end1<<end2;
	while(i!=end1 && j!=end2)
	{
		if(a[i]>a[j])
		{
			s[k]=a[j];
			j++;
		}
		else
		{
			s[k]=a[i];
			i++;
		}
	
		cout<<s[k]<<endl;
			k++;
	}
	//cout<<k;
	if(j!=end2)
	{
		for(int m=j;m<end2;m++)
		{
			s[k]=a[m];
	cout<<s[k]<<endl;		k++;
		}
	}
	else if(i!=end1)
	{
		for(int m=i;m<end1;m++)
		{
			s[k]=a[m];
			
			cout<<s[k]<<endl;k++;
		}
	}
	for(int i=0;i<7;i++)
	{
		a[i]=s[i];
	}
	
}
int main()
{
	int a[10]={4,5,6,1,2,3,4};
	int start =0;
	int end=6;
	int mid=2;
	merge(a,start,mid,end);
	cout<<endl;
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<"  ";
	}
}
