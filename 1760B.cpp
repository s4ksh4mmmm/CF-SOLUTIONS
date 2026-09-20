
#include <bits/stdc++.h>
using namespace std;
int atilla(string n,int len){
   int l=n.length();
   int max=0;
   char ch='a';
  for(int i=0;i<l;i++){
    int c=((int)n[i]-(int)ch) + 1;
    if(c>max){
        max=c;
    }
  }
   
    return max;
}

int main() {
    int t,l;
    cin >> t;
    int farr[t];
    string n;
    for(int i=0;i<t;i++){
        cin>>l;
       cin>>n;
      
      farr[i]=atilla(n,l);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}