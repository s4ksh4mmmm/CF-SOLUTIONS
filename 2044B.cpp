
#include <bits/stdc++.h>
using namespace std;

string normalp(string s){
    string rev="";
    int l=s.length();
    
    for(int i=l-1;i>=0;i--){
        if(s[i]=='q'){
          rev=rev+'p';
        }
         else if(s[i]=='p'){
          rev=rev+'q';
        }
        else{
            rev=rev+'w';
        }
    }
   
    return rev;
}

int main()
{
    int t;
    cin >> t;
   string n;
    string farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        farr[i]=normalp(n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}