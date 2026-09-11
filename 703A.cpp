#include <bits/stdc++.h>
using namespace std;
char game(int m,int c){
    char decision=' ';
    if(m>c){
        decision='m';
    }
    else if(c>m){
         decision='c';
    }
    else{
        decision='d';
    }
    return decision;

}
int main(){
    int n;
    cin>>n;
    char arr[n];
    int md,cd;
    int misika=0;
        int chris=0;
    int draw=0;
    for(int i=0;i<n;i++){
       cin>>md;
       cin>>cd;
       arr[i]=game(md,cd);
    }
    for(int i=0;i<n;i++){
       if(arr[i]=='m'){
        misika++;
       }
       else if(arr[i]=='c'){
        chris++;
       }
       else{
        draw++;
       }
    }
    if(misika>chris){
        cout<<"Mishka";
    }
    if(misika<chris){
        cout<<"Chris";
    }
   if(chris==misika || draw==n){
    cout<<"Friendship is magic!^^";
   }
return 0;
}