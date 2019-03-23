#include<iostream>
using namespace std;
bool subset(int a[],int index,int n)
{
    if(index==n+1)
    {
        return false;
    }
    int r=0;
    for(int i=index;i<=n;i++)
    {
        r=r+a[i];
        if(r==0)
        {
            return true;
        }
        cout<<r<<" ";
    }
    cout<<endl;
    int ans=subset(a,index+1,n);
    return ans;
}
int main() {
    int n,t,a[100];
    cin>>t;
    while(t--)
    {
        
    
    cin>>n;
    
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       cout<<a[i]<<endl;
	    
    }
   // cout<<subset(a,1,n);
    if(subset(a,1,n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    cout<<endl;
    }
	return 0;
}
