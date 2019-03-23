#include<iostream>
using namespace std;
bool binary(int a[],int k,int start,int end)
{
	cout<<"shah";
	bool ans;
	if(start>end)
	{
		return false;
	}
	int middle=(start+end)/2;
	if(a[middle]==k)
	{
		return true;
	}
	else
	if(k<a[middle])
	{
		ans=binary(a,k,0,middle);
	}
	else
	{
		 ans=binary(a,k,middle+1,end);
	}
	return ans;
}
int main()
{
	int a[10]={1,2,3,4,5};
	int k;
	cin>>k;
	if(binary(a,k,0,4))
	{
		cout<<"found";
	}
	else 
	{
		cout<<"NOT FOUND";
	}

}
