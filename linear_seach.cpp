#include<IOstream>
using namespace std;
bool search(int a[],int k,int index,int n)
{
	if(index==n)
	{
		return false;
	}
	if(a[index]==k)
	{
		return true;
	}
	bool ans=search(a,k,index+1,n);
	return ans;
}
int main()
{
	int a[10]={1,2,3,4,5};
	int k;
	cin>>k;
	if(search(a,k,0,4))
	{
		cout<<"found";
	}
	else 
	{
		cout<<"NOT FOUND";
	}
}
