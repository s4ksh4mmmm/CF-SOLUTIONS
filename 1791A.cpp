#include <bits/stdc++.h>
using namespace std;
string check(char x){
string find;
string cf="codeforces";
int l=cf.length();
for(int i=0;i<l;i++){
       if(x==cf[i]){
        find="YES";
        break;
       }
       else{
        find="NO";
       }
    }
     
return find;

}
int main(){
    int t;
    char n;
     cin>>t;
    string arr[t];

    for(int i=0;i<t;i++){
        cin>>n;
        arr[i]=check(n);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}