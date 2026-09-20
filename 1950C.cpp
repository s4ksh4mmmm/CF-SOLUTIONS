
#include <bits/stdc++.h>
using namespace std;
string clock(string s) {
 string result;
string sub=s.substr(0,2);
int h=stoi(sub);
string rem=s.substr(2,3);
if(h>12){
    if(h<=21){
    result="0"+to_string(h-12)+rem+" "+"PM";
    }
    else{
        result=to_string(h-12)+rem+" "+"PM";
    }
}
if(h<12 && h>0){
    if(h<=9){
    result="0"+to_string(h)+rem+" "+"AM";
    }
    else{
        result=to_string(h)+rem+" "+"AM";
    }
}
if(h==12){
    result=to_string(h)+rem+" "+"PM";
}
if(h==0){
     result="12"+rem+" "+"AM";
}
 
return result;
}

int main() {
    int t;
    string s;
    cin >> t;
     
    string farr[t];
    for(int i=0;i<t;i++){
       cin>>s; 
      farr[i]=clock(s);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}