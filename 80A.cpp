#include <bits/stdc++.h>
using namespace std;
bool prime(int l){
int count=0;
bool pri;

for(int i=1;i<=l;i++){
    if(l%i==0){
        count++;
    }  
}
if(count==2){
    pri=true;
}
else{
    pri=false;
}
 return pri;   
}

int nextprime(int x){
    
     bool f=false;
     int find=x+1;
    while(f!=true){
      if(prime(find)==true){
        f=true;
      }
      else{
        find++;
      }
    }
    return find;
}
   
int main(){
    int n,m;
        cin>> n;
        cin>> m;
        if(nextprime(n)==m){
          cout<<"YES";
        }
        else{
            cout<<"NO";
        }
return 0;
    }