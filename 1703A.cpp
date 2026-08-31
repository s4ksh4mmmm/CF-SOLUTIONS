#include <bits/stdc++.h>
using namespace std;
bool findyes(string x){
    int l=x.length();
    string ns="";
    for(int i=0;i<l;i++){
     char c=x[i];
     ns+=(char)toupper(c);
    }
    if(ns=="YES"){
      return true;
    }
    else 
    return false;

}
int main(){
    int n;
    cin>>n;
    string arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
       if(findyes(arr[i])==true){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}