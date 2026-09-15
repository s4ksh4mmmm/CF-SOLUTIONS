
#include <bits/stdc++.h>
using namespace std;

int white(string s){
    int start,end;
    int minlen;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(s[i]=='B'){
          start=i;
          break;
        }
    }
    for(int i=l-1;i>=0;i--){
        if(s[i]=='B'){
          end=i;
          break;
        }
    }
    minlen=end-start;
    return (minlen+1);
}

int main()
{
    int t,l;
    cin >> t;
   string n;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin>>l;
        cin >> n;
        farr[i]=white(n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}