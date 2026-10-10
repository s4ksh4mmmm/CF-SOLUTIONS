#include <bits/stdc++.h>
using namespace std;
int Equal(int ar[],int size) {
  int result;


return result;
}

int main() {
    int t,n;
    cin>>t;
    int farr[t];
    for(int i=0;i<t;i++){
        cin>> n;
        int arr[n];
        for(int j=0;j<n;j++){
        cin>>arr[i];
    }
        farr[i]=Equal(arr,n);
    }
        for(int j=0;j<t;j++){
       cout<<farr[j]<<endl;
    }
    
    return 0;
}