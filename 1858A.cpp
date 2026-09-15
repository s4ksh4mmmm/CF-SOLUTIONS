//TLEG
#include <bits/stdc++.h>
using namespace std;

string buttons(int x,int y,int z){
int a=x;//anna
int k=y;//katie
int e=z;//either of them
int t=a+k+e;
int i=1;
  string s;
while((a!=0 || e!=0) && (k!=0 || e!=0) && i<=t){
    if(i%2==1 && (a!=0 || e!=0))//anna's turn
    {
        if(e>0){
            e=e-1;
        }
        else{
            a=a-1;
        }
    }
    if(i%2==0 && (k!=0 || e!=0))//katie's turn
    {
       if(e>0){
            e=e-1;
        }
        else{
            k=k-1;
        }
    }
       i=i+1; 
}
if(a>0){
    s="First";
}
if(k>0){
    s="Second";
}
return s;
    }

int main(){
    int t,a,b,c;
    cin>>t;
    string arr[t];

    for(int i=0;i<t;i++){
        cin>>a;
        cin>>b;
        cin>>c;
        arr[i]=buttons(a,b,c);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}