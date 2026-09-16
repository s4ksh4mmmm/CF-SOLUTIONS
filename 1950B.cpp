#include <bits/stdc++.h>
using namespace std;
void pattern( int x) {
   char arr[2*x][2*x];

    
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            int r1=i+(i*1)+0;int r2=i+(i*1)+1;
            int c1=j+(j*1)+0;int c2=j+(j*1)+1;
            if(i%2==0 && j%2==0){
               arr[r1][c1]='#';
               arr[r2][c1]='#';
               arr[r1][c2]='#';
               arr[r2][c2]='#';
            }
            else if(i%2==1 && j%2==1){
               arr[r1][c1]='#';
               arr[r2][c1]='#';
               arr[r1][c2]='#';
               arr[r2][c2]='#';
            }
            else{
               arr[r1][c1]='.';
               arr[r2][c1]='.';
               arr[r1][c2]='.';
               arr[r2][c2]='.';
            }
       
    }
    }
     for(int i=0;i<2*x;i++){
        for(int j=0;j<2*x;j++){
          cout<<arr[i][j];
        }
        cout<<endl;
    }


}

int main() {
    int t,n;
    cin >> t;
    int farr[t];
    for (int i = 0; i < t; i++) {
        cin >> n;
         farr[i]=n; 
    }
    
    for (int k = 0; k < t; k++) {
      pattern(farr[k]);
       
    }
    
    return 0;
}