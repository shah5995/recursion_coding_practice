#include<iostream>
using namespace std;
#include<cstring>
int count(char arr[1000],int index ,int n )
{
	if(strlen(arr)==n)
	{
		arr[index]='\0';
		cout<<arr<<endl;
		return 1;
	}
	arr[index]='a';
	int c=0;
	c=c+count(arr,index+1,n);
	if(index==0)
	{
		arr[index]='b';
	}
	else
	{
		if(arr[index-1]=='b')
		{
			return c;
		}
		arr[index]='b';
	}
	
	c=c+count(arr,index+1,n);
	return c;
}

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
	
	int n;
	cin>>n;
	int a[1000],b[1000];
	a[0]=1;
	b[0]=1;
	//cout<<count(arr,0,n);
	for(int i=1;i<n;i++)
	{
		a[i]=a[i-1]+b[i-1];
		b[i]=a[i-1];
	}
	int r=a[n-1]+b[n-1];
	cout<<" #"<<n<<" : "<<r<<endl;	
	}
}
