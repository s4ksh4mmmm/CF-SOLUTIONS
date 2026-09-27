
#include <bits/stdc++.h>
using namespace std;
int MAX(int x[],int s){
  sort(x,x+s);
return x[s-1];
}
int holidayofequality(int ar[],int size) {
 int result=0;
 int max=MAX(ar,size);
 for(int i=0;i<size;i++){
    result=result+(max-ar[i]);
 }

return result;
}

int main() {
    int n;
    cin>>n;
       int arr[n];
    int eq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

      eq=holidayofequality(arr,n);
        cout<<eq<<endl;
    
    return 0;
}