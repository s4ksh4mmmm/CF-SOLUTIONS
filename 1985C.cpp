#include <bits/stdc++.h>
using namespace std;


int goodprefix(vector<long long> &ar,int n) {
    int count=0;
    long long sum=0;
    long long mx=0;
    for(int i=0;i<n;i++){
      long long x=ar[i];
      
      mx=max(x,mx);
      sum+=x;
      if(sum==2*mx){
        count++;
      }

        

    }
   return count;
}

int main() {
   int t,n;
   cin>>t;
   long long farr[t];
    
    for(int i=0;i<t;i++){
        cin >> n;
    vector<long long> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    farr[i]=goodprefix(ar,n);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}