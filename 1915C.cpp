#include <bits/stdc++.h>
using namespace std;
string square(const vector<long long>ar,int size) {
  long long sum=0;
  string result;
   for(int j=0;j<size;j++){
        sum=sum+ar[j];
        }
      double sqr=sqrt(sum);
      double Floor=floor(sqr);
      if((sqr-Floor)==0){
        result="YES";
      }
      else{
        result="NO";
      }
return result;

}

int main() {
    int n,t;
    cin >> t;
    string farr[t];
    for(int i=0;i<t;i++){
        cin>>n;
        vector<long long>arr(n);

        for(int j=0;j<n;j++){
        cin>>arr[j];
        }

      farr[i]=square(arr,n);
    }
    for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }
    return 0;
}