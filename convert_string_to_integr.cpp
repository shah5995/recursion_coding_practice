#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int convert(char s[],int i)
{
	if(s[i]=='\0')
	{
		return(0);
	}
	int r=convert(s,i+1);
	int p=s[i];
	p=p-48;
	return r*10+p;//
	
}
int reverse(int n)
{
	int r=0;
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	return r;
}
int main()
{
	char s[20];
	cin.getline(s,20);
	int i=0;
	int c=0;
	int j=strlen(s)-1;
//	cout<<j;
	while(s[j]=='0')
	{
		c++;
//		cout<<"shah"<<c;
		j--;
	}
	int n=convert(s,i);
//	cout<<c<<endl;
	int n2=reverse(n);

//cout<<n2;
	cout<<n2*pow(10,c);
}
