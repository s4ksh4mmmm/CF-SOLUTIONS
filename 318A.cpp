
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;

    long long k;
    long long c;
    cin >> k;
    if(n%2==0){
  if(k<=n/2){
    c=2*k-1;
  }
  else{
    c=2*k-n;
  }
     
}
else{
   if(k<=(n/2)+1){
    c=2*k-1;
  }
  else{
    c=2*k-n-1;
  }
}
cout<<c;
return 0;
}