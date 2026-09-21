
#include <bits/stdc++.h>
using namespace std;
string shortstring(string s) {
 string result;
 int l=s.length();
 if(l==2){
    result=s;
 }
 else{
    result=result+s[0];
    for(int i=1;i<l-1;i=i+2){
        result=result+s[i];
    }
    result=result+s[l-1];
 }

return result;
}

int main() {
    int t;
    string s;
    cin >> t;
     
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>s; 
      farr[i]=shortstring(s);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}