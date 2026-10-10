#include <bits/stdc++.h>
using namespace std;


int snd(string s) {
   int len=s.length();
   int cost=0;
   int ones=0;
   int zeros=0;
   for(int i=0;i<len;i++){
    if(s[i]=='1'){
      ones++;
    }
    else{
        zeros++;
    }
   }
   if(len==1){
    cost=1;
   }
   else if(ones==zeros){
    cost=0;
   }
   else{
    int i=0;
    string ref=s;
    int MIN=min(zeros,ones);
    zeros=MIN;
    ones=MIN;
    while(ones!=0 || zeros!=0){
        if(ref[i]=='0' && ones>0){
            ref[i]='1';
            ones--;
            i++;
            continue;
        }
        else if(ref[i]=='1' && zeros>0){
            ref[i]='0';
            zeros--;
            i++;
            continue;
        }
        else{
            i++;
        }
    }
    
   int j=0;
    while(j<ref.length()){
           if(ref[j]==s[j]){
           ref.erase(j,1);
           cost++;
           }
           else{
            j++;
           }
        }
    
   }
   return cost;
}

int main() {
   int t;
   cin>>t;
   string s;
   
   int farr[t];
    
    for(int i=0;i<t;i++){
       cin>> s;
    farr[i]=snd(s);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}