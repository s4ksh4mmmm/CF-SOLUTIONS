
#include <bits/stdc++.h>
using namespace std;
string playoff(vector<int>ar,int size) {
 string result;
  int f1,f2;
  if(ar[0]>ar[1]){
    f1=ar[0];
  }
  else{
    f1=ar[1];
  }
  if(ar[2]>ar[3]){
    f2=ar[2];
  }
  else{
    f2=ar[3];
  }
  sort(ar.begin(),ar.end());
  if((f1+f2)==(ar[2]+ar[3])){
    result="YES";
  }
  else{
    result="NO";
  }
return result;
}

int main() {
    int t;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
        
        vector<int>arr(4);

        for(int j=0;j<4;j++){
        cin>>arr[j];
        }

      farr[i]=playoff(arr,4);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}