#include<iostream>
using namespace std;
#include<cstring>
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
bool compare(char arr[],char str[])
{
	int i=0;
	while(arr[i]!='\0')
	{
		int p=arr[i];
		int q=str[i];
	    if(p==q)
	    {
	    	i++;
	        continue;
	    }
	    if(p>q)
	    {
	    	return false;
		}
		if(p<q)
		{
			return true;
		}
	    i++;
	}
	return false;
}
int m=0;
char output[100][100];
void permutate(char arr[100],int index,char str[]){
    if(arr[index]=='\0'){
    	//if(compare(arr,str))
    	
    //	cout<<arr<<endl;	
		
		int p=0;
		while(arr[p]!='\0')
		{
			output[m][p]=arr[p];
			p++;
		}
		output[m][p]='\0';
		m++;
        
        return;
    }
    for(int j=index;arr[j]!='\0';j++){
        swap(arr[index],arr[j]);
        permutate(arr,index+1,str);
        swap(arr[j],arr[index]);
    }
    return;
}
void sort(char arr[][100],int r)
{
	for(int i=0;i<r;i++)
	{ int p=0;
		for(int j=0;j<r-i-1;j++)
		{ 
		int n1=arr[j][p];
		int n2=arr[j+1][p];
	//	cout<<n1<<"  "<<n2<<endl;
	
			if(n1>n2)
			{
				swap(arr[j],arr[j+1]);
			}
			
			
		}
	}
	
	
	for(int i=0;i<r;i++)
	{ int p=0;
		for(int j=0;j<r-i-1;j++)
		{ 
		int n1=arr[j][p];
		int n2=arr[j+1][p];
	//ab	cout<<n1<<"  "<<n2<<endl;
	
			if(n1==n2)
			{
			//	cout<<"faisal";
				while(n1==n2)
				{
					p++;
			//		cout<<"shah";
					n1=arr[j][p];
		             n2=arr[j+1][p];
		             	if(n1>n2)
				{
					swap(arr[j],arr[j+1]);
				}
		             //	cout<<n1<<"  "<<n2<<endl;
					
				}
			
				p=0;
			}
			
			
		}
	}
}
bool check(char msg1[100],char msg2[100])
{
	if(strlen(msg1)!=strlen(msg2))
	{
		return false;
	}
	int i=0;
	while(msg1[i]!='\0')
	{
		if(msg1[i]!=msg2[i])
		{
			return false;
		}
		i++;
	}
	return true;
}
void delete_duplicate()
{
	for(int i=0;i<=m;i++)
	{
	
		if(output[i]=='\0')
		{
			
			continue;
		}
		for(int j=i+1;j<=m-1;j++)
		{
			
			
			if(output[j]=='\0')
			{
				
				continue;
			}
			bool c=check(output[i],output[j]);
		//	cout<<c<<"  "<<output[i]<<" -- "<<output[j]<<endl;
			if(c)
			{
				output[j][0]='\0';
			
			}
			else
			{
				break;
			}
		}
	}
}
int main(){
char arr[100],str[100] ;
cin.getline(arr,100);
int i=0;
while(arr[i]!='\0')
{
	str[i]=arr[i];
	i++;
}

str[i]='\0';
//cout<<"shah";
permutate(arr,0,str);
sort(output,m);

delete_duplicate();
for(int i=0;i<m;i++)
{
	if(output[i][0]=='\0')
	{
		continue;
	}
	cout<<output[i]<<endl;
}
}
