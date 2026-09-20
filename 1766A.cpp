
#include <bits/stdc++.h>
using namespace std;



int count(int n){
    int c;int d=0;
  for(int i=n;i!=0;i=i/10){
    d++;
  }
    string s=to_string(n);
    int fd=s[0]-'0';
     c=(d-1)*9 + fd;
    return c;
}

int main() {
    int t,n;
    cin >> t;
    int farr[t];
    
    for(int i=0;i<t;i++){
       cin>>n;
      
      farr[i]=count(n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}