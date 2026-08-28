#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>> s;
    int l=s.length();
    int k=0;
    for(int i=0;i<l-1;i++){
        int c=0;
        for(int j=i;j<l;j++){
          if(s[i]==s[j]){
            c++;
          }
        }
         if(c==1){
            k++;
         }
    }
    k++;
   if(k%2==1) 
   {
    cout<<"IGNORE HIM!";
   }
   if(k%2==0){
    cout<<"CHAT WITH HER!";
   }
   return 0;
    
}