#include <bits/stdc++.h>
using namespace std;
string amusingjoke(string a,string b ,string check) {
  string result;
  string s=a+b;
  if(s.length()!=check.length()){
    result="NO";
  }
  else{
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int pos=check.find(ch);
        if(pos<0){
          result="NO";
          break;
        } 
        else{
            check.erase(pos,1);
            result="YES";

        }
  }
}
return result;
}

int main() {
    string t;
    string a,b,check;
        cin>>a;
        cin>>b;
         cin>>check;
      t=amusingjoke(a,b,check);
        cout<<t<<endl;
    
    return 0;
}