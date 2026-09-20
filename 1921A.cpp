
#include <bits/stdc++.h>
using namespace std;
int square(vector<vector<int>>ar,int r,int c) {
 int area;
 int side;int ref=ar[0][0];
 for(int i=1;i<r;i++){
       if(ref==ar[i][0]){
        side=abs(ar[i][1]-ar[0][1]);
       }
        }
        area=side*side;
  
return area;
}

int main() {
    int t;
    cin >> t;
    int farr[t];
    int row=4;
    int col=2;
    for(int i=0;i<t;i++){
        vector<vector<int>>arr(row,vector<int>(col));

        for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
        cin>>arr[i][j];
        }
        }

      farr[i]=square(arr,row,col);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}