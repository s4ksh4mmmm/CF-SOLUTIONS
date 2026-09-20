
#include <bits/stdc++.h>
using namespace std;
string osumania(vector<vector<char>>ar,int r,int c) {
string result="";
 for(int i=r-1;i>=0;i--){
    
       for(int j=0;j<c;j++){
       if(ar[i][j]=='#'){
        int d=j+1;
        result=result+to_string(d)+" ";
       }

}

}
return result;
}

int main() {
    int t,row;
    cin >> t;
    int col=4;
     string farr[t];
    for(int i=0;i<t;i++){
        cin>>row;
        
        vector<vector<char>>arr(row,vector<char>(col));

        for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        cin>>arr[i][j];
        }
        }

      farr[i]=osumania(arr,row,col);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}