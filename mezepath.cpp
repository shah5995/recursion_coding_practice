#include<iostream>
using namespace std;
int maze_path(int s1,int s2,int e1,int e2 )
{
    if(s1>e1||s2>e2)
    {
        return 0;
    }
    if(s1==e1&&s2==e2)
    {
        return 1;
    }
    int c=0;
    c=c+maze_path(s1+1,s2,e1,e2);
    c=c+maze_path(s1,s2+1,e1,e2);
   
    return c;
}
void maze_path2(int s1,int s2,int e1,int e2,char ar[],int index )
{
    if(s1>e1||s2>e2)
    {
        return ;
    }
    if(s1==e1&&s2==e2)
    {
    	ar[index]=='\0';
    	cout<<ar<<" ";
        return ;
    }
    int c=0;
    ar[index]='V';
    maze_path2(s1+1,s2,e1,e2,ar,index+1);
    ar[index]='H';
    maze_path2(s1,s2+1,e1,e2,ar,index+1);
    
   
    
}
int main() {
    int n1,n2;
    char ar[100];
    cin>>n1>>n2;
    cout<<maze_path(1,1,n1,n2)<<endl;
	maze_path2(1,1,n1,n2,ar,0);
	return 0;
}
