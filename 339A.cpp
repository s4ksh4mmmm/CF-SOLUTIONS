#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l=s.length();
    char temp;
    char arr[l]; char narr[(l/2)+1];
    for(int i=0;i<l;i++){
        arr[i]=s[i];
        if(i%2==0){
          narr[i/2]=arr[i];
        }
    }
    for (int i =0;i<((l/2)+1);i++)
     {
    for (int j=i+1;j<((l/2)+1);j++) {
        if (narr[i] > narr[j]) {
            temp = narr[i];
            narr[i] = narr[j];
            narr[j] = temp;
        }
         }
        }
if(l==1){
    cout<<s[0];
}
else{
    for(int k=0;k<l;k++){
        if(k%2==0){
            cout<<narr[k/2];
        }
        if(k%2==1){
            cout<<"+";
        }
    }
}
return 0;
}