#include <bits/stdc++.h>
using namespace std;
bool composite(int n) {
  bool result;
   int c=0;
for(int i=1;i<=n;i++){
   if(n%i==0){
   c++;
   }
}
if(c>2){
    result=true;
}
else{
    result=false;
}

   return result;
}
int main() {
    string s;
    int n;
    
    cin>>n;
    int a;
    int b;
    for(int i=n/2,j=n/2;;){
        if( (i+j==n)  && (composite(i)==true && composite(j)==true )){
            a=i;
            b=j;
        break;
        }
        else{

          if(composite(i)==true && composite(j)!=true){
               j++;
          }
          if(composite(i)!=true && composite(j)==true){
                i--;
          }
          if(composite(i)!=true && composite(j)!=true) {
            i--;
            j++;
          }
         
    
        
    }
}
s=to_string(a)+" "+to_string(b);
cout<<s;
    return 0;
}