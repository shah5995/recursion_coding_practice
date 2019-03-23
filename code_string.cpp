#include<iostream>
using namespace std;
#include<cstring>
void code_string(char input[],char output[],int i,int j,char ascii[])
{
    if(i>=strlen(input))
    {
        output[j]='\0';
        cout<<output<<" ";
        return;
    }
    output[j]=ascii[input[i]-48];
    code_string(input,output,i+1,j+1,ascii);
    if(i>=0)
    {
    j=j-1;
    cout<<j<<endl;
    int r=(input[i-1]-48)*10+(input[i]-48);
    if(r<25)
    {
    	output[j]=ascii[r];
    	code_string(input,output,i+2,j+1,ascii);
    	
	}
}
    
    
}
int main() {
    char input[100],output[100];
    cin>>input;
    char ascii[30];
    for(int i=1;i<=26;i++)
    {
        ascii[i]='a'+i-1;
    }
    code_string(input,output,0,0,ascii);
	return 0;
}
