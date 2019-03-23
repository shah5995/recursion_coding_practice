#include<iostream>
using namespace std;
#include<cstring>
void remove(char s[],int index)
{
if(s[index]=='\0')
{
	return;
}
//cout<<"shah";
remove(s,index+1);
if(s[index]==s[index+1])
{
	//int r=index;
	while(s[index]!='\0')
	{
		s[index]=s[index+1];
		index++;
	}
	s[index-1]='\0';
}
return;
}
int main()
{
	char s[50];
	cin.getline(s,50);
	remove(s,0);
//	cout<<"shah faisal";
	cout<<s;
}
