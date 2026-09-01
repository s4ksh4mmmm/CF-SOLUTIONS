#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int c=1;
    int p=3;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2==0){
                arr[i][j]='#';
            }
            else if(i%2==1 && i==c && j==(m-1) ){
             arr[i][j]='#';
             c=c+4;
            }
            else if(i%2==1 && i==p && j==0){
              arr[i][j]='#';
             p=p+4;
            }
            else{
                arr[i][j]='.';
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    return 0;
}