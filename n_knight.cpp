#include<iostream>
using namespace std;
bool is_safe(int arr[][10],int i,int j,int n)
{
	int m1,m2,m3,m4,m5,n1,n2,n3,n4,n5;
	m1=i+2;
	m2=i-2;
	m3=j+1;
	m4=j-1;
	n1=j+2;
	n2=j-2;
	n3=i+1;
	n4=i-1;
//	cout<<endl<<"att  "<<i<<j<<endl;
	if(m1<n && m3<n && arr[m1][m3]==1)
	{
		return false;
	}
	
	if(m1<n && m4>=0 && arr[m1][m4]==1)
	{
		return false;
	}
	
	if(m2>=0 && m3<n && arr[m2][m3]==1)
	{
		return false;
	}
	
	if(m2>=0 && m4>=0 && arr[m2][m4]==1)
	{
		return false;
	}
	if(n1<n && n3<n && arr[n3][n1]==1)
	{
		return false;
	}
	
	if(n1<n && n4>=0 && arr[n4][n1]==1)
	{
		return false;
	}
	
	if(n2>=0 && n3<n && arr[n3][n2]==1)
	{
		return false;
	}
	
	if(n2>=0 && n4>=0 && arr[n4][n2]==1)
	{
		return false;
	}
	

	 return true;
}

int n_knight(int n,int x,int y,int arr[][10],int  k)
{
if(k==n)
{
		//cout<<endl<<"---------------------------------------"<<endl;
		for(int r1=0;r1<n;r1++)
		{
			for(int r2=0;r2<n;r2++)
			{
			  if(arr[r1][r2]==1)
			  {
			  	cout<<"{"<<r1<<"-"<<r2<<"} ";
			  }
			}
			
		}
//cout<<endl<<"---------------------------------------"<<endl;
return 1;
}
int c=0;



        for(int i=x;i<n;i++)
        {   
        int j ;
          if(i==x)j=y;
          else j=0;
        	for(;j<n;j++)
        	{
        			
		if(is_safe(arr,i,j,n))
	{
		arr[i][j]=1;
		c=c+n_knight(n,i,j+1,arr,k+1);
	//	c=c+check_down(n,x,i,arr,k);
		arr[i][j]=0;
		
	}
			}
		}





return c;

}
int main()
{
	int n,k=0;
	cin>>n;
	int arr[10][10]={0};
	
	
	
    
     int ans = n_knight(n,0,0,arr,0);
     cout<<endl;
     cout<<ans;
}
