
#include <bits/stdc++.h>
using namespace std;
string sum(int a,int b,int c) {
 string result="";
 if(a==b+c || b==a+c || c==b+a  ){
    result="YES";
 }
 else{
    result="NO";
 }

return result;
}

int main() {
    int t,a,b,c;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>a;
       cin>>b;
       cin>>c; 
       
      farr[i]=sum(a,b,c);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}