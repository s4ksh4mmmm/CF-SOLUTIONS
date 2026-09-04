#include <bits/stdc++.h>
using namespace std;
bool sum(string x){
    string sub1=x.substr(0,3);
    string sub2=x.substr(3,3);
    int s1=0;
    int s2=0;
    for(int i=0;i<3;i++){
        s1=s1+(int)sub1[i];
        s2=s2+(int)sub2[i];
    }
    if(s1==s2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
         if(sum(arr[i])==true){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
    }
    return 0;
    
}