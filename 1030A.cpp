#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int f=-1;
    for(int j=0;j<n;j++){
        if(arr[j]==1){
            f=1;
        }
    }
    if(f==-1){
        cout<<"EASY";
    }
    if(f==1){
        cout<<"HARD";
    }
    return 0;
}