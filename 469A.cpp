#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int xarr[x];
    for(int i=0;i<x;i++){
        cin>> xarr[i];
    }
    int y;
    cin>>y;
    int yarr[y];
    for(int j=0;j<y;j++){
        cin>> yarr[j];
    }
    int farr[n];
    for(int i=1;i<=n;i++){
        for(int j=0;j<x;j++){
        if(xarr[j]==i){
         farr[i-1]=xarr[j];
        }
    }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<y;j++){
        if(yarr[j]==i){
         farr[i-1]=yarr[j];
        }
    }
    }
    int s=0;
    for(int j=1;j<=n;j++){
       if(farr[j-1]==j){
        s++;
       }
    }
    if(s==n){
        cout<<"I become the guy.";
    }
    else{
        cout<<"Oh, my keyboard!";
    }
return 0;


}