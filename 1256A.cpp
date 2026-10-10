#include <bits/stdc++.h>
using namespace std;
string payment(long long a,long long b,long long n,long long S) {
   
         if(a>=(S/n)){
            if(b>=(S%n)){
                return "YES";
            }
            else{
                return "NO";
            }
         }
         else{
            if(b>=(S-a*n)){
                return "YES";
            }
            else{
            return "NO";
            }
         }

}


int main() {
   long long t,a,b,n,S;
   cin>>t;
   
   
   vector<string> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>a;
       cin>>b;
       cin>>n;
       cin>>S;
    farr[i]=payment(a,b,n,S);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}