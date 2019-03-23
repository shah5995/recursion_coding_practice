#include<iostream>
using namespace std;
int find_nthprime(int n)
{

	for(int i=2;i<=1000;i++)
	{
		int j=2;
		for(;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j==i)
		{
			//cout<<i;
			n--;
			if(n==0)
			{
				return i;
			}
		}
	}
}
#include<stack>
int main() {
    stack<int>a;
    stack<int>a1,a2;
    stack<int>b[100];
    int size =0;
    int n,q;
    cin>>n>>q;
    for(int j=1;j<=n;j++)
    {
        int p;
        cin>>p;
        a.push(p);
    }
    for(int i=1;i<=q;i++)
    {
        
    int c=find_nthprime(i);
   //cout<<c;
    
    
    
    //  cout<<a1.top()<<" "<<b1.top();
    while(!a.empty())
    {
    //	cout<<"shah";
        int m=a.top();
      //  cout<<m<<endl;
        //cout<<a.size()<<" a1"<<a1.size()<<"b1"<<b1.size()<<endl;
        if(m%c==0)
        {
          b[size].push(m);
        }
        else
        {
            a1.push(m);
        }
        a.pop();
      //  cout<<endl<<a1.top()<<" "<<b1.top()<<endl;
    }
    while(!a1.empty())
    {
        a2.push(a1.top());
        a1.pop();
    }
      while(!a2.empty())
    {
        a.push(a2.top());
        a2.pop();
    }
    size++;
    
    }
   // cout<<a1.top()<<" "<<b1.top()<<endl<<endl;
for(int i=0;i<size;i++)
{

    while(!b[i].empty())
    {
        cout<<b[i].top()<<endl;
        b[i].pop();
    }	
}
    //cout<<endl<<endl;
    while(!a.empty())
    {
        cout<<a.top()<<endl;
        a.pop();
    }
    
    
	return 0;
}
