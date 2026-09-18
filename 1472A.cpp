#include <bits/stdc++.h>
using namespace std;
string cards(int w,int h,int n) {
  int count=1;
  string result;
  if(w%2==0 || h%2==0){
   for(int i=w,j=h;i%2!=1 || j%2!=1;){
      if(i%2==0){
        i=i/2;
        count=count*2;
      }
      if(j%2==0){
        j=j/2;
        count=count*2;
      }
    }
}
if(count>=n){
    result="YES";
}
else{
    result="NO";
}
    
return result;

}

int main() {
    int n,t,w,h;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
        cin>>w;
        cin>>h;
        cin>>n;
      farr[i]=cards(w,h,n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}