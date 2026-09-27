
#include <bits/stdc++.h>
using namespace std;
string daytona(int ar[],int size,int k) {
 string result;
 int count=0;
 for(int i=0;i<size;i++){
    if(ar[i]==k){
        count++;
    }
 }
if(count>=1){
    result="YES";
}
else{
    result="NO";
}

return result;
}

int main() {
    int t,n,k;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>n;
       cin>>k;
     int arr[n];
     for(int j=0;j<n;j++){
       cin>>arr[j];
    }
      farr[i]=daytona(arr,n,k);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}