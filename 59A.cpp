#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int ln=s.length();
    int l=0;
    int u=0;
    for(int i=0;i<ln;i++){
     char c=s[i];
     if(islower(c)){
        l++;
     }
     else{
        u++;
     }
    }
    string ns="";
    if(l>=u){
        for(int i=0;i<ln;i++){
            ns=ns+(char)tolower(s[i]);
        }
       
    }
    else{
        for(int i=0;i<ln;i++){
            ns=ns+(char)toupper(s[i]);
        }
     
    }
    cout<< ns;
    return 0;
}