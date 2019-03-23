#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
//int sum=0;
int convert(char s[],int i)
{
	if(s[i]=='\0')
	{
		return 0;
	}

	
int r=s[i]-48;
return (r*pow(10,(strlen(s)-i-1))+convert(s,i+1));
}
int main()
{
	char s[100];
	cin.getline(s,100);
	int i=0;
	int r=convert(s,i);
	cout<<r;
	
}
