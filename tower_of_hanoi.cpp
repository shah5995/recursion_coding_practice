#include<iostream>
using namespace std;
int toh(int source,int helper,int destination,int n)
{
	if(n==1)
	{
		cout<<"Move "<<n<<"th disc from T"<<source<<" to T"<<destination<<endl;
		return 1;
	}
	int c=toh(source,destination,helper,n-1);
			cout<<"Move "<<n<<"th disc from T"<<source<<" to T"<<destination<<endl;
		c++;
		c=c+toh(helper,source,destination,n-1);
		return c;
}
int main()
{
	int n;
	cin>>n;
	cout<<toh(1,2,3,n);
}
