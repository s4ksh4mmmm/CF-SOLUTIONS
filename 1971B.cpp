
#include <bits/stdc++.h>
using namespace std;


string DIFFSTR(string s) {
    int l=s.length();
    string result;
    char ch=s[0];
    int c=0;
    for(int i=0;i<s.length();i++){
     if(ch==s[i]){
        c++;
     }
    }
    if(c==s.length()){
        result="NO";
    }
    else{
        string sub1=s.substr(0,1);
        string sub2=s.substr(1,l-1);
        result="YES\n"+sub2+sub1;
    }
  return result;
}


  
int main() {
    int t;
    cin >> t;
    string s;
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>s;
      farr[i]=DIFFSTR(s);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}