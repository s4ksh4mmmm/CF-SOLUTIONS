#include <bits/stdc++.h>
using namespace std;
char freq(string x){
char ch;
int a=0;
int b=0;
for(int i=0;i<5;i++)
{
      if(x[i]=='A'){
        a++;
      }
      else{
        b++;
      }
}
if(a>b){
    ch='A';
}
else{
    ch='B';
}
return ch;
}

int main(){
    int t;
    cin>>t;
    char arr[t];
   string s;
    for(int i=0;i<t;i++){
        cin>>s;
        arr[i]=freq(s);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}