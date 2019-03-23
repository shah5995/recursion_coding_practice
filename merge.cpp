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
	
		while(start2<=end1)
		{
			temp[k++]=a[start2++];
		}
			
		while(start1<=end2)
		{
			temp[k++]=a[start1++];
		}
	
	for(int i=0;i<k;i++)
	{
		a[start++]=temp[i];
	}
	return;
}
int main()
{
	int a[20]={3,4,5,0,1,8};
    int start=0;
    int end =5;
    merge(a,start,end);
    for(int i=0;i<=end;i++)
    {
    	cout<<a[i];
	}
    

}
