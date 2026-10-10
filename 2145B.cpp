#include <bits/stdc++.h>
using namespace std;
string deckofcard(string s,int n,int k) {
   string p="";
   for(int i=0;i<n;i++){
    p=p+"+";
   }
   int start =0;int end=n-1;
if(n==k){
    for(int j=0;j<k;j++)    
    p[j]='-';
}
else{
   for(int j=0;j<k;j++){
    char ch=s[j];
    if(ch=='0'){
        if(p[start-1]=='?'&& start>0){
            p[start-1]='-';
            start++;
            p[start]='?';
        }
        else{
            p[start]='-';
            start++;
        }
    }
    else if(ch=='1'){
        if(p[end+1]=='?' && end<n-1){
            p[end]='-';
           end--;
            p[end]='?';
        }
        else{
            p[end]='-';
            end--;
        }
    }
    else{

         if(p[start-1]=='?' && start>0 && start <n-1){
            p[start]='?';
        }
        else{
            p[start]='?';
            start++;
        }


        if(p[end+1]=='?'  && end>0 && end <n-1){
          
            p[end]='?';
        }
        else{
            p[end]='?';
            end--;
            
        }
   }
}
  
}
return p;
}


int main() {
   int t,n,k;
   cin>>t;
   string s;
   
   string farr[t];
    
    for(int i=0;i<t;i++){
        cin>>n;
        cin>>k;
       cin>> s;
    farr[i]=deckofcard(s,n,k);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}