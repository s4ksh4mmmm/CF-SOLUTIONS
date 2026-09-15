
#include <bits/stdc++.h>
using namespace std;

int robin(const vector<int>&ar,int n , int k ){
    int count=0;
    int gold=0;
    for(int i=0;i<n;i++){
        if(ar[i]>=k){
            gold=gold+ar[i];
        }
        if(ar[i]==0 && gold>0 ){
            count++;
            gold--;
        }
    }
    
    return count;
}

int main()
{
    int t,n,k;
    cin >> t;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin>>n;
        cin>>k;
        vector<int>arr(n);
        for(int j = 0; j < n; j++){
        cin>>arr[j];
    }
        farr[i]=robin(arr,n,k);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}