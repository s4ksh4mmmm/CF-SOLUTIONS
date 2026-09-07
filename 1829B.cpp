#include <bits/stdc++.h>
using namespace std;
int blankzero(int n){
     int arr[n];
     int c=0;
     int max=0;
for(int i=0;i<n;i++){
   cin>>arr[i];
}
for(int j=0;j<n;j++){
    if(arr[j]==0  ){
        c++;
        if((arr[j+1]==1  && j<n-1) || (arr[j]==0 && j==n-1)){
          if(c>max){
            max=c;
          }
          c=0;
        }
    }
 
}
return max;
}
int main(){
    int n;
    cin>> n;
   int c=0;
    int arr[n];
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        arr[i]=blankzero(l);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
    }
    