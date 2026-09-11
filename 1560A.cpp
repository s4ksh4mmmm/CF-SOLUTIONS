#include <bits/stdc++.h>
using namespace std;
int checkthree(int x){
int n;

    for(int i=1, c=1;c<=x;i++){
        n=i;
       
      if(i%10==3 || i%3==0){
        continue;
      }
      else{
        c++;
    
    }
}
    return n;
}
int main(){
    int t;
    int k;
     cin>>t;
    int arr[t];

    for(int i=0;i<t;i++){
        cin>>k;
        arr[i]=checkthree(k);
    }
    for(int i=0;i<t;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}