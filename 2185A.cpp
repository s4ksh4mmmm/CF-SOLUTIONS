
#include <bits/stdc++.h>
using namespace std;
string root(int a) {
string result="";
for(int i=1;i<=a;i++){
    result=result+to_string(i)+" ";
}
return result;
}

int main() {
    int t,a;
    
    cin >> t;
     
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>a; 
        
      farr[i]=root(a);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}