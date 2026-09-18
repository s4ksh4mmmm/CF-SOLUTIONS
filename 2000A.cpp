#include <bits/stdc++.h>
using namespace std;
string task(int n) {
  int d=0;
  string result;
 
   for(int i=n;i!=0;i=i/10){
     d++;
    }
    int ar[d];
    for(int i=(d-1),j=n; i>=0 ;i--,j=j/10){
     ar[i]=j%10;
    }
   if((ar[0]*10+ar[1])==10 &&( ar[2]!=0 || ar[2]>=2)){
       result="YES";
   }
   else{
    result="NO";
   }
   return result;
}
int main() {
    int n,t;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
      farr[i]=task(n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}