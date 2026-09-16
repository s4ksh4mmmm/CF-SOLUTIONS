#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m;
    cin >> n;
    cin>> m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
       cin>>arr[i][j];
    }
    }
    int c=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
       if(arr[i][j]=='C' || arr[i][j]=='M' || arr[i][j]=='Y'){
        c++;
       }
    }
    }
    if(c>0){
      cout<<"#Color";
    }
    else{
      cout<<"#Black&White";
    }

    return 0;
}