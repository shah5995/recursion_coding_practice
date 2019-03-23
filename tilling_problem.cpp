#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
int tiles(int n)
{
	if(n<0)
	{
		return 0;
	}
	if(n==0)
	{
		return 1;
	}
	return (tiles(n-1)+tiles(n-4));
}
int main()
{
	int n;
	cin>>n;
	cout<<tiles(n);
}
