#include <bits/stdc++.h>
using namespace std;
int bnw(string s,int n,int k) {
   int count=0;
   int start=0;
   int Min=INT_MAX;

   for(int j=0;j<n;j++){
    int end=j;
    if(j<k){
        if(s[j]=='W'){
            count++;
        }
        if((j+1)==k){
        if(count<Min){
        Min=count;
        }
    }
    }
    
    if(j>=k){
        if(s[start]=='W'){
            count--;
            start++;
        }
        else{
            start++;
        }
        if(s[end]=='W'){
            count++;
        }
        if(count<Min){
        Min=count;
    }
    }
    
   }
   return Min;
}


int main() {
   int t,n,k;
   cin>>t;
   string s;
   
   vector<int> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>n;
       cin>>k;
       cin>>s;
    farr[i]=bnw(s,n,k);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}