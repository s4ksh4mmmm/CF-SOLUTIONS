//TLE
#include <bits/stdc++.h>
using namespace std;
int GCD(int a,int b) {
  
    int gcd=0;
    if(a>b){
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
    }
     if(a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                gcd=i;
            }
        }
    }
    if(a==b){
        gcd=a;
    }
    return gcd;
}

int max(int n) {
    int notlw=((n-1)*n)/2;//number of times loop worked
  int m=0;//max gcd
  int a=1;int b=a+1;
  for(int i=1;i<=notlw;i++){
    int c=0;
    if(b<=n){
        c=GCD(a,b);
        b++;
    }
    else{
        a=a+1;
        b=a+1;
        c=GCD(a,b);
    }

       if(c>m){
    m=c;
  }
    
  }
  return m;
  }
  
int main() {
    int n,t;
    cin >> t;
    int farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
      farr[i]=max(n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}