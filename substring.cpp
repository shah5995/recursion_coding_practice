#include<iostream>
using namespace std;
#include<cstring>
void print_subsequence(char input[100],int n,int inputIndex,char output[100],int outputIndex){
    if(inputIndex>=n){
        for(int i=0;i<outputIndex;i++){
            cout<<output[i]<<" ";
        }
       // cout<<"            "<<outputIndex;
        cout<<endl;
        return;
    }
    output[outputIndex] = input[inputIndex];
    print_subsequence(input,n,inputIndex+1,output,outputIndex+1);
    print_subsequence(input,n,inputIndex+1,output,outputIndex);
    return;
}
int main(){
char input[100];
cin.getline(input,100);
char output[100] = {0};
print_subsequence(input,strlen(input),0,output,0);
//cout<<"hello"<<endl;
}
