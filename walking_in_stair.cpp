#include<iostream>
using namespace std;
int walk(int n,int i)
{
	if(i==n)
	{
		return 1;
		
	}
	else if(i>n)
	{
		return(0);
	}
	int sum=0;
	sum=sum+walk(n,i+1);
	sum=sum+walk(n,i+2);
	sum=sum+walk(n,i+3);
	return sum;
}
int main()
{
	int n;
	cin>>n;int count=walk(n,0);
	cout<<"total possible ways    ";
	cout<<count;
	
}
