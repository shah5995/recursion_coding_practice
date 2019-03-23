#include<iostream>
using namespace std;
#include<cmath>
#include<cstring>
//char arr[100][100];
	static int m=0;
void recursion(char input[],char output[],int input_index,int output_index,char arr[][100])
{
	if(input[input_index]=='\0')
	{
		output[output_index]='\0';
		int p=0;
		while(output[p]!='\0')
		{
			arr[m][p]=output[p];
			p++;
		}
		arr[m][p]='\0';
		m++;
	//	cout<<output<<" ";
		return;
	}

	recursion(input,output,input_index+1,output_index,arr);
	
	output[output_index]=input[input_index];
	recursion(input,output,input_index+1,output_index+1,arr);
	
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
int main()
{
	char input[100];
	int n;
	cin>>n;
	cin.get();
	while(n--)
	{
	
	cin>>input;
	//cout<<pow(2,strlen(input))<<endl;
	char output[100];
	char arr[100][100];
	
	recursion(input,output,0,0,arr);
//	int m=strlen(arr);
sort(arr,m);
//	cout<<endl;
	for(int i=0;i<m;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	m=0;
}
}
