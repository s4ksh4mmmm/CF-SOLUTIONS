
#include <bits/stdc++.h>
using namespace std;
int museum(string s) {
 int result=0;
  int l=s.length();
char ch='a';
int c;
int ac;
for(int i=0;i<l;i++){
    int d=(int)s[i]-(int)ch;
 c=abs(d);
 ac=26-c;
 ch=s[i];
 if(c<ac){
    result=result+c;
 }
 else{
    result=result+ac;
 }
}
 
return result;
}

int main() {
    string s;
       cin>>s;
      cout<<museum(s);
    return 0;
}