#include<iostream>
using namespace std;
#include<cstring>
#include<map>
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
bool compare(char arr[],char str[])
{
	int i=0;
	int p,q;
	p=q=0;
	while(arr[i]!='\0')
	{
		p=p*10+(arr[i]-'a');
		q=q*10+(str[i]-'a');
		i++;
	}
	cout<<p<<"  "<<q<<endl;
	if(p>q)
	{
		return false;
		
	}
	return true;
}
map<string,int>s1;
int m=1;
void permutate(char arr[100],int index,char str[]){
    if(arr[index]=='\0'){
    //	if(!compare(arr,str))
    	{
    	
    		if(s1.count(arr)==0)
    		{
    				s1.insert(pair<string,int>(arr,m));m++;
			}
    	cout<<arr<<endl;	
		}
        
        return;
    }
    for(int j=index;arr[j]!='\0';j++){
        swap(arr[index],arr[j]);
        permutate(arr,index+1,str);
        swap(arr[j],arr[index]);
    }
    return;
}
int main(){
char arr[100],str[100] ;
cin>>arr;
//strcpy(arr,str);
int i=0;
while(arr[i]!='\0')
{
	str[i]=arr[i];
	i++;
}

str[i]='\0';
//cout<<"shah";
permutate(arr,0,str);
map<string,int>::iterator it=s1.begin();
map<string,int>::iterator it2=s1.find(str);
//it2++;
while(it!=it2)
{
	cout<<it->first<<endl;
	it++;
}
}
