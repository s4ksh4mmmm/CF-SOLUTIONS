#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int l=s1.length();
    string ns="";
    for(int i=0;i<l;i++){
        if(s1[i]==s2[i]){
           ns+='0';
        }
        else{
            ns+='1';
        }
    }
    cout<<ns;
    return 0;
}