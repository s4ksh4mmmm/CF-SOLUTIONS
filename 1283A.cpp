
#include <bits/stdc++.h>
using namespace std;
int newyear(string s) {
 int result=0;
 int l=s.length();
 string sub1;
 string sub2;
 int p=-1;
 for(int i=0;i<l;i++){
           if(p!=-1){
       sub2=s.substr(i,l-i);
       result=result+(60-stoi(sub2));
       break;
     }
     if(s[i]==' '){
         sub1=s.substr(0,i);
        result=result+(23-stoi(sub1))*60;
        p=i;
       
     }
 }
return result;
}

int main() {
    int t;
    string s;
    cin >> t;
     cin.ignore();
    int farr[t];
    for(int i=0;i<t;i++){
       getline(cin, s); 
      farr[i]=newyear(s);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}