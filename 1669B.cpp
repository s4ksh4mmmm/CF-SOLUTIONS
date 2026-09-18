//tle code
#include <bits/stdc++.h>
using namespace std;
int triple(const vector<int>ar,int size) {
  int result=-1;
  
   for(int i=0;i<size;i++){
       int c=0;
     for(int j=0;j<size;j++){
       if(ar[i]==ar[j]){
        c++;
       }
      }
      if(c>=3){
        result=ar[i];
        break;
      }
      }
      
return result;

}

int main() {
    int n,t;
    cin >> t;
    int farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
        vector<int>arr(n);

        for(int j=0;j<n;j++){
        cin>>arr[j];
        }

      farr[i]=triple(arr,n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}