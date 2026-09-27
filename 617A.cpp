#include <bits/stdc++.h>
using namespace std;
int elephant(int n) {
  int result=0;
int ar[5]={1,2,3,4,5};
int k=4;
for(int i=n;i!=0;){
   if(i-ar[k]>=0){
    result++;
    i=i-ar[k];
   }
   else{
    k--;
   }
}

   return result;
}
int main() {
    int n,t;
        cin>>n;
      t=elephant(n);
        cout<<t<<endl;
    
    return 0;
}