#include <bits/stdc++.h>
using namespace std;
string word(char ar[][8],int r,int c){
string result="";
int col=0;
   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(ar[i][j]!='.'){
          col=j;
          break;
        }
    }
    if(col!=0){
        break;
    }
   }
   for(int k=0;k<r;k++){
    if(ar[k][col]!='.'){
       result=result+ar[k][col];
    }
   }

return result;
}
int main(){
    int t;
    cin>>t;
    string farr[t];
    

    for(int i=0;i<t;i++){
        char arr[8][8];
        for(int k=0;k<8;k++){
        for(int j=0;j<8;j++){
        cin>>arr[k][j];
    }
    }
      farr[i]=word(arr,8,8);
    }
      
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}