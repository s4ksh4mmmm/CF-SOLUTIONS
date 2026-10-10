#include <bits/stdc++.h>
using namespace std;


string divisor(long long n) {
    if(n%2==1){
        return "YES";
    }
    else{
        long long count=0;
        long long i;
        for( i=n;i%2==0 && i>1;i=i/2){
            
        }
        if(i%2==1 && i>1){
            return "YES";
        }
        else{
            return "NO";
        }
    }
}

int main() {
   long long t,n;
   cin>>t;
   string farr[t];
    
    for(int i=0;i<t;i++){
       cin>>n;
    farr[i]=divisor(n);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}