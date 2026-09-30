
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long c;
       if(n>0){
        c=n;
       }
       else{
        long long k=n/10;
        long long f=((k/10)*10) +(n%10);
        if(n/10>=f){
          c=n/10;
        }
        else{
          c=f;
        }
       }

cout<<c;
return 0;
}