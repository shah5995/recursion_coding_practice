#include<iostream>
using namespace std;
int multiply(int a,int b)
{
	if(b==0)
	{
		return 0;
	}
	if(a<0||b<0)
	{
		if(a<0)
		{
			a=a*-1;
		}
		else
		{
			b=b*-1;
		}
	return -(a+multiply(a,b-1));		
	}
	else
	if(a<0&&b<0)
	{
		a=a*-1;
		b=b*-1;
		return-(a+multiply(a,b-1));
	}
	else
	{
		return(a+multiply(a,b-1));
	}

}
int main()
{
	int a,b;
	cin>>a>>b;
	
	cout<<multiply(a,b);
	
}
