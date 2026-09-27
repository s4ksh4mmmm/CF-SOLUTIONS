//TLE
#include <bits/stdc++.h>
using namespace std;


string card(string s,string ar[],int n) {
    string result;
    int c=0;
for(int i=0;i<5;i++){
    string t=ar[i];
    if(t[0]==s[0] || t[1]==s[1]){
        c++;
    }
    
}
if(c>0){
    result="YES";
}
else{
    result="NO";
}


return result;
  }
  
int main() {
    
    string s;
    cin>>s;
    string arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
      
    }
    
        cout<<card(s,arr,5)<<endl;
    
    return 0;
}