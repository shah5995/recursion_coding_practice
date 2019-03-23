#include<iostream>
using namespace std;
char map[][10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE","six","seven","eight","NINe"};
void print(int n)
{
	if(n==0)
	{
		return ;
	}
	int p=n%10;
	int r=n/10;
	print(r);
	cout<<map[p]<<" ";
}
int main()
{
	int n;
	cin>>n;
	print(n);
}
