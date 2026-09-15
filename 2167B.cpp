
#include <bits/stdc++.h>
using namespace std;

string name(string s, string t,int l){
   string check;
      string ns="";
      for(int i=0;i<l;i++){
        char ch=t[i];
        int c=0;int j=0;
        int len=s.length();
        while(j<len){
            if(s[j]==ch){
                ns=ns+s[j];
                s=s.erase(j,1);
                break;
            }
            else{
                j++;
            }
        }
      }
      if(ns.compare(t)==0){
        check="YES";
      }
      else{
        check="NO";
      }

return check;
}

int main()
{
    int t,len;
    cin >> t;
    string x,y;
    string farr[t];
    for(int i = 0; i < t; i++){
        cin>> len;
        cin >> x;
         cin >> y;
        farr[i]=name(x,y,len);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
