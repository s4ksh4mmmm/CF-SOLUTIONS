
#include <bits/stdc++.h>
using namespace std;
long long threepiles(long long a,long long b,long long c) {
 long long result;
 if(abs(a-b)>abs(a+c-b)){
result=abs(a-b);
 }
 else{
    result=abs(a+c-b);
 }
 
return result;
}

int main() {
    long long t,a,b,c;
    
    cin >> t;
     
    long long farr[t];
    for(int i=0;i<t;i++){
       cin>>a; 
       cin>>b;
       cin>>c;
      
      farr[i]=threepiles(a,b,c);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}