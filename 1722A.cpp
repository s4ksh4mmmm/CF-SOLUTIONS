#include <bits/stdc++.h>
using namespace std;
string spellcheck(int x,string y){
string ans;
string check="Timur";
int c=0;int u;
if(x==5){
for(int i=0;i<x;i++){
    char ch=check[i];
    int h=0;
    for(int j=0;j<x;j++){
        if(ch==y[j]){
          c++;
          h++;
        }
        u=h;
    }
    if(h>1){
        ans="NO";
        break;
    }
}
if(c==5 && u==1){
    ans="YES";
}
else{
    ans="NO";
}
}
else{
    ans="NO";
}
return ans;
    }

int main(){
    int t,n;
    cin>>t;
    string ns;
    string arr[t];

    for(int i=0;i<t;i++){
        cin>>n;
        cin>>ns;
        arr[i]=spellcheck(n,ns);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}