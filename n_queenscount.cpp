#include<iostream>
using namespace std;
bool is_safe(int arr[100][100],int n,int x,int y){
    for(int i=x+1,j=y;i<=n;i++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y;i>0;i--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y+1;j<=n;j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x,j=y-1;j>0;j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x+1,j=y+1;i<=n && j<=n;i++,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y+1;i>0 && j<=n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x+1,j=y-1;x<=n && j>0;i++,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=x-1,j=y-1;i>0 &&j>0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }

    return true;
}
int nqueens(int arr[100][100],int n,int x,int y){
    if(y==n){
       // cout<<"****************************"<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(arr[i][j]!=0)
                {
                	cout<<"{"<<i<<"-"<<j<<"} ";
				}
            }
            
        }
        cout<<"  ";
        //cout<<"****************************"<<endl;*/
        return 1;
    }
    int number = 0;
    for(int i=1;i<=n;i++){
        if(is_safe(arr,n,x,i)){
            arr[x][i] = 1;
            number+=nqueens(arr,n,x+1,1);
            /*
            bool done = nqueens(arr,n,0,y+1);
            if(done){
                return true;
            }
            */
            arr[x][i] = 0;
        }
    }
    return number;
}
int main(){
int arr[100][100] = {0};
int n;
cin>>n;
cout<<nqueens(arr,n,1,1);
}
