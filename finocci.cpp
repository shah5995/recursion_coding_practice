#include<iostream>
using namespace std;
int  fib(int n)
{
	if(n==2)
	{
	return(1);		
	}

	else if(n==1)
	{
		return 0;
	 } 
    int a=fib(n-2);
	int b=fib(n-1);
	return(a+b);	 
}
int main()
{
	int n;
	cin>>n;
	int r=fib(n);
	cout<<r;
}
