
#include <bits/stdc++.h>
using namespace std;
string forbiddenint(int n,int k,int x) {
 string result="";
 int count=0;
 int sum=0;
 string s="";int ar[k];
 for(int i=0;i<k;i++){
  ar[i]=i+1;
 }
for(int i=n;i!=0;){
    int c=0;
  for(int j=0;j<k;j++){
   
  if(i-ar[j]>=0 && ar[j]!=x){
  c++;
  sum=sum+ar[j];
  s=s+to_string(ar[j])+" ";
  i=i-ar[j];
  break;
  }
 }
 if(c==1){
    count++;
 }
 if(i==x && n-sum==x){
    result="NO";
    break;
 }
 }
 if(result!="NO"){
    result="YES\n"+to_string(count)+"\n"+s;
 }

return result;
}

int main() {
    int t,n,k,x;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>n;
       cin>>k;
       cin>>x; 
       
      farr[i]=forbiddenint(n,k,x);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}