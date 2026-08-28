#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin>> s1;
    string s2;
    cin>> s2;
    int l=s1.length();
    int c=-1;
  for(int i=0;i<l;i++){
    if(toupper(s1[i])!=toupper(s2[i])){
        c=i;
        break;
    }

  }
  if(c==-1){
    cout<<"0";
  }
    else if((toupper(s1[c])-toupper(s2[c]))>0){
cout<<"1";
    }
    else {
    cout<< "-1";
    }
    return 0;
  }
    
