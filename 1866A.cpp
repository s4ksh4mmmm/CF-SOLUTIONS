#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    int arr[t];
    
    int min=100001;
    for(int i=0;i<t;i++){
        cin>> arr[i];
    }
    for(int i=0;i<t;i++){
        int count=0;
        int d=arr[i];
        for(int j=d;j!=0;){
         if(j<0){
            j++;
            count++;
         }
         else if(j>0){
            j--;
            count ++;
         }
         else{
            count=0;
         }
    }
    if(count<min){
        min=count;
    }
    }
    cout<< min;
    return 0;
}