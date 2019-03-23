#include<iostream>
using namespace std;
void toh(int n,char source,char helper,char destination)
{
	if(n==1)
	{
		cout<<"move\t"<<source<<"\tto\t"<<destination<<endl<<endl;
		return;
	}
	toh(n-1,source,destination,helper);
	cout<<"move\t"<<source<<"\tto\t"<<destination<<endl<<endl;
	toh(n-1,helper,source,destination);
	
}
int main()
{
	int n;
	cin>>n;
	char a,b,c;
	toh(n,'A','B','C');
}
