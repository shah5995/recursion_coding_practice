#include<iostream>
using namespace std;
#include<cstring>

int code_string(char input[],int i,char output[],int j)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		
		//cout<<output<<", ";
		
		return 1;
	}
	output[j]=input[i]+'a'-49;
	int c=0;
c=c+	code_string(input,i+1,output,j+1);
	if(i+1<strlen(input))
	{
		int p=input[i]-48;
		p=p*10+input[i+1]-48;
		if(p<26)
		{
			output[j]=p+'a'-1;
			
			c=c+code_string(input,i+2,output,j+1);
		}
	}
	return c;
}
int p=0;
void code_string2(char input[],int i,char output[],int j,int c)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		
		cout<<output;
	p++;
		
		if(p!=c)
		{
		cout<<", ";	
		}
		
		return;
	}
	output[j]=input[i]+'a'-49;
	code_string2(input,i+1,output,j+1,c);
	if(i+1<strlen(input))
	{
		int p=input[i]-48;
		p=p*10+input[i+1]-48;
		if(p<26)
		{
			output[j]=p+'a'-1;
			
			code_string2(input,i+2,output,j+1,c);
		}
	}
	
}
int main()
{
	char input[100],output[100];
	cin>>input;
	cout<<"[";
int	c=code_string(input,0,output,0);
	code_string2(input,0,output,0,c);
	cout<<"]";
}
