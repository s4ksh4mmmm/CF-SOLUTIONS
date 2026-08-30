#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int a=0;
int d=0;
int l=s.length();
for(int i=0;i<l;i++){
    if(s[i]=='A'){
        a++;
    }
    if(s[i]=='D'){
        d++;
    }
}
if(a>d){
    cout<<"Anton";
}
else if(a<d){
    cout<<"Danik";
}
else{
    cout<<"Friendship";
}
return 0;
}