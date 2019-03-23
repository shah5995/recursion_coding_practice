#include<iostream>
using namespace std;
int multiply(int m,int n)
{
	if(n==0)
	{
		return(0);
	}
	return(m+multiply(m,n-1));
}
int main()
{
	int n,m;
	cin>>n>>m;
	int r=multiply(m,n);
	cout<<r;
}
