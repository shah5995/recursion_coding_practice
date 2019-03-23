
#include<iostream>
using namespace std;
#include<cstring>
char keypad[][10]={ "", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void keypad_code2(char input[],int i,int j,char output[])
{
    if(input[i]=='\0')
    {
        output[j]=='\0';
        cout<<output<<endl;
        return;
    }
    int r=input[i]-48;
    if(r==0)
    {
        keypad_code2(input,i+1,j,output);
    }
    int k=0;
    while(keypad[r][k]!='\0')
    {
        output[j]=keypad[r][k];
        
        keypad_code2(input,i+1,j+1,output);
        k++;
    }
}
int keypad_code(char input[],int i,int j,char output[])
{
    if(input[i]=='\0')
    {
        output[j]=='\0';
       // cout<<output<<" ";
        return 1;
    }
    int r=input[i]-48;
    int k=0;
    int c=0;
    while(keypad[r][k]!='\0')
    {
        output[j]=keypad[r][k];
        
        c=c+keypad_code(input,i+1,j+1,output);
        k++;
    }
    return c;
}
int main() {
    char input[10],output[100];
    cin>>input;
  /*  int i=0;
    int r=1;
    while(input[i]!='\0')
    {
    	int p=input[i]-48;
    	r=r*strlen(keypad[p]);
    	i++;
	}
	cout<<input<<r<<endl;*/
	
   // cout<<keypad_code(input,0,0,output)<<endl;
    keypad_code2(input,0,0,output);
	return 0;
}
