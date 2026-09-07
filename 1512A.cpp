#include <bits/stdc++.h>
using namespace std;
int spy(int len){
int arr[len];
int index;
for(int i=0;i<len;i++){
    cin>>arr[i];
}
for(int i=0;i<len;i++){
    int d=arr[i];
    int c=0;
   for(int j=0;j<len;j++){
   if(arr[i]==arr[j]){
    c++;
   }
}
if(c==1){
index=i+1;
}
}
return index;
}

int main(){
    int n;
    cin>> n;
   int c=0;
    int arr[n];
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        arr[i]=spy(l);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
    }