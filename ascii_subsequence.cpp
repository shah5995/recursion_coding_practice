#include<iostream>
using namespace std;
char convert[][25]={"97","98","99","100","101","102","103","104","105","106","107","108","109","110","111","112","113","114","115","116","117","118","119","120","121","122"};
void ascii_subsequence(char input[],int i,int j,char output[])
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        
        cout<<output<<" ";   
        
        return;
    }
    
     ascii_subsequence(input,i+1,j,output);
     output[j]=input[i];
     //output[++j]='\0';
     
     for(int m=0;m<2;m++)
     {
     	if(m==0)
     	{
     ascii_subsequence(input,i+1,j+1,output);		
		 }
     
     else
     {
	 
    int r=input[i]-97;
    int k=0;
    while(convert[r][k]!='\0')
    {
        output[j+k]=convert[r][k];
       
        
        k++;
         
        
    }
   
    ascii_subsequence(input,i+1,j+k,output);
 }
	 }
}
int ascii_subsequence2(char input[],int i,int j,char output[])
{
    if(input[i]=='\0')
    {
        output[j]='\0';
        
   //     cout<<output<<" ";   
        
        return 1;
    }
    int c=0;
     c=c+ascii_subsequence2(input,i+1,j,output);
     output[j]=input[i];
     //output[++j]='\0';
     
     for(int m=0;m<2;m++)
     {
     	if(m==0)
     	{
     c=c+ascii_subsequence2(input,i+1,j+1,output);		
		 }
     
     else
     {
	 
    int r=input[i]-97;
    int k=0;
    while(convert[r][k]!='\0')
    {
        output[j+k]=convert[r][k];
       
        
        k++;
         
        
    }
   
    c=c+ascii_subsequence2(input,i+1,j+k,output);
 }
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
   cout<<ascii_subsequence2(input,0,0,output)<<endl;
    ascii_subsequence(input,0,0,output);
    
	//return 0;
	return 0;
}
