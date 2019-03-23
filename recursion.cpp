#include<iostream>
using namespace std;
void subsequence(int input[],int i_index,int o_index,int output[],int n)
{
	if(i_index>=n)
	{
		for(int i=0;i<o_index;i++)
		{
			cout<<output[i]<<" ";
		}
		cout<<endl;
		return;
	}
	output[o_index]=input[i_index];
		subsequence(input,i_index+1,o_index+1,output,n);
		subsequence(input,i_index+1,o_index,output,n);
}
int main()
{
	int n;
	cin>>n;
	int input[20];
	for(int i=0;i<n;i++)
	{
		cin>>input[i];
	}
	cout<<"**************************"<<endl;
	int i_index,o_index,output[20];
	i_index=o_index=0;
	subsequence(input,i_index,o_index,output,n);
}
