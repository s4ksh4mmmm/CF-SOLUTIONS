#include <bits/stdc++.h>
using namespace std;
int stones(string s,int n) {
  int result=0;

for(int i=0;i<n-1;i++){
    if(s[i]==s[i+1]){
        result++;
    }
}

   return result;
}
int main() {
    int n,t;
    
    string s;
   
   
        cin>>n;
        cin>>s;
      t=stones(s,n);
    
    
        cout<<t<<endl;
    
    return 0;
}