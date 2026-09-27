#include <bits/stdc++.h>
using namespace std;
bool pallindrome(string s){
bool result;
string rev="";
  int l=s.length();
for(int i=l-1;i>=0;i--){
  rev=rev+s[i];
}
if(rev==s){
    result=true;
}
else{
    result=false;
}
return result;

}


int count(int size,char ch, string s){
      int c=0;
      if(pallindrome(s)==true){
        c=0;
      }
      else{
        if(size%2==0){
          for(int i=0;i<size/2;i++){
            if(s[i]==s[size-i-1]){
                continue;
            }
            else{
               if((s[i]==ch && s[size-i-1]!=ch) || (s[i]!=ch && s[size-i-1]==ch)){
                c=c+1;
               }
               if((s[i]!=ch && s[size-i-1]!=ch) ){
                  c=c+2;
               }
            }
          }
        }
        else{
          for(int i=0;i<(size/2)+1;i++){
            if(s[i]==s[size-i-1]){
                continue;
            }
            else{
               if((s[i]==ch && s[size-i-1]!=ch) || (s[i]!=ch && s[size-i-1]==ch)){
                c=c+1;
               }
               if((s[i]!=ch && s[size-i-1]!=ch) ){
                  c=c+2;
               }
            }
          }
            

        }
      }

return c;
}


int main(){
    int t,n;
    cin>>t;
    int arr[t];
    string s;
    char ch;
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>ch;
        cin>>s;
        arr[i]=count(n,ch,s);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}