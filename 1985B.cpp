//TLE
#include <bits/stdc++.h>
using namespace std;
int sum(int x,int n) {
  int s=0;int k=1;
  for(int i=x;i<=n;i=x*k){
    s=s+i;
    k=k+1;
  }
    
    return s;

  }

int MAX(int n) {
    int m=0;
    int s;
    int index;
    for(int i=2;i<=n;i++){
     s=sum(i,n);
      if(s>m){
        m=s;
        index=i;
      }
    }


return index;
  }
  
int main() {
    int n,t;
    cin >> t;
    int farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
      farr[i]=MAX(n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}