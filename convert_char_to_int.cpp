#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
int convert(char string[],int i)
{
	if(string[i]=='\0')
	{
		return 0;
	}
	int a=string[i]-48;
	a=a*pow(10,(strlen(string)-i-1))+convert(string,i+1);
}
int main()
{
	char string[100];
	cin>>string;
	cout<<convert(string,0);
	
}
