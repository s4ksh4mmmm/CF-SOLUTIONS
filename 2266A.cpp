
#include <bits/stdc++.h>
using namespace std;
int goodcontest(int ar[],int n) {
 int result=0;
 if(ar[0]+ar[1]+ar[2]==3*n){
    result=0;
 }
 else{
 int mina=min(ar[0],ar[1]);
 int minb=min(mina,ar[2]);
result=(n-minb);
 }
return result;
}

int main() {
    int t,n;
    
    cin >> t;
     int arr[3];
    int farr[t];
    for(int i=0;i<t;i++){
       cin>>n; 
       for(int j=0;j<3;j++){
       cin>>arr[j];
    }
      farr[i]=goodcontest(arr,n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}