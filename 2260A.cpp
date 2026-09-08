#include <bits/stdc++.h>
using namespace std;
int findreplacement(int x){
int narr[x];int c=0;
for(int i=0;i<x;i++){
        cin>>narr[i];
    }
     int zeros=0;
    if(narr[0]==0 && narr[x-1]==0) {
        c=0;
    }
    else{
       for(int i=0;i<x;i++){
       if(narr[i]==0){
        zeros++;
       }
    }
    if(zeros<2){
        c=-1;
    }
    else{
        if(narr[0]==1 && narr[x-1]==1){
            c=2;
        }
        if((narr[0]==1 && narr[x-1]!=1) || (narr[0]!=1 && narr[x-1]==1) ){
            c=1;
        }
    }
    }
return c;

}
int main(){
    int t,n;
    cin>>t;
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>n;
        arr[i]=findreplacement(n);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}