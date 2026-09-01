#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
int o=0;
int u=0;
   for(int j=0;j<n;j++){
    
    if(arr[j]>0){
        if(o>0){
        o+=arr[j];
        }
        else if(o==0){
             o=arr[j];
        }
    }
    if(arr[j]==-1){
        if(o<=0){
            u++;
        }
        else if(o>0){
            o--;
        }
    }
   }
   cout<< u;
   return 0;
}