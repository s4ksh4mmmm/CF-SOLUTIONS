#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n;
    cin>>h;
    int arr[n];
    int width=0;
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    for(int j=0;j<n;j++){
       if(arr[j]<=h){
        width=width+1;
       }
       if(arr[j]>h && arr[j]<=(2*h)){
        width=width+2;
       }
    }
    cout<< width;
    return 0;

}