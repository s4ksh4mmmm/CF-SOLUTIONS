#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    cin>> s;
    string ns;
    int l=s.length();
    ns=(char)toupper(s[0]);
    for(int i=1;i<l;i++){
        ns+=s[i];
    }
    cout<<ns;
    return 0;
}