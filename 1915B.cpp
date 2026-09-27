
#include <bits/stdc++.h>
using namespace std;
char latinsq(vector<vector<char>>ar,int r,int c) {
char ch;

 for(int i=0;i<3;i++){
    
       for(char j='A';j<='C';j++){
        int c=0;
          if(ar[i][0]==j || ar[i][1]==j ||  ar[i][2]==j  ){
             c++;
          }
          if(c==0){
        ch=j;
       }

       }
       
}
return ch;

}


int main() {
    int t;
    cin >> t;
    int col=3;
    int row=3;
     char farr[t];
    for(int i=0;i<t;i++){
        
        
        vector<vector<char>>arr(row,vector<char>(col));

        for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        cin>>arr[i][j];
        }
        }

      farr[i]=latinsq(arr,row,col);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}