#include <bits/stdc++.h>
using namespace std;
int lovestory(string t){
 string s="codeforces";
 int c=0;
    for(int i=0;i<10;i++){
        if(s[i]!=t[i]){
            c++;
        }
    }
    return c;
}
int main(){
   int n;
   cin>>n;
   string s;
    int indices[n];
    
    
    for(int i=0;i<n;i++){
        cin>>s;
        indices[i]=lovestory(s);
        }
        for(int i=0;i<n;i++){
        cout<<indices[i]<<endl;
        }
        
    return 0;
    }
    