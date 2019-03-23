
#include<iostream>
using namespace std;
#include<cstring>
#include<cmath>
int convert1(char s1[],int a,string s2,int limit)
{
    int i=0;
    
    while(i<limit)
    {
       if(i%a==0)
       s1[i]='1';
       else
       s1[i]='0';
        i++;
        
    }
    for(int i=0;i<limit;i++)
    s2+=s1[i];
    cout<<s2;
   
    return 0;

}
int  gcd(char s1[],string s2,int a,int b,int limit)
{
    int ans;
    if(a%b==0)
    {
         ans=convert1(s1,a,s2,limit);
        return ans;
    }
    int p=gcd(s1,s2,b,a%b,limit);

    
    return ans;
    
}
int main()
{
    int t;
    cin>>t;
    int b=0;
    while(b<t)
    {
        int a,b;
        cin>>a>>b;
        char s1[100000];
        string s2;
        long long int ans=gcd(s1,s2,a,b,a);
       // cout <<s2;
        //cout<<endl;
        int i=0;
        ans=0;
        for(int j=strlen(s1)-1;j>=0;j--)
        {
        	ans=ans+(s1[j]-48)*pow(2,i);
        	i++;
		}
		cout<<ans<<endl;
        b++;
    }
}
