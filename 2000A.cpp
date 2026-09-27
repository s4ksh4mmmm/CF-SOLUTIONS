#include <bits/stdc++.h>
using namespace std;
string task(string n) {
  int l=n.length();
  string result;
  int f=-1;
  for(int i=1;i<l;i++){
    if(n[i]!='0'){
      f=i;
      break;
    }
  }
 
  if(f>0){
     string sub1=n.substr(0,f);
  string sub2=n.substr(f,l-f);
      if(stoi(sub1)==10 && stoi(sub2)>1){
        result="YES";
      }
      else{
        result="NO";
      }
  }
  else{
    result="NO";
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
      farr[i]=task(s);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}