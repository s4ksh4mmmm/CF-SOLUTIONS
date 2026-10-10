#include <bits/stdc++.h>
using namespace std;

long long love(vector<long long>&ar, int n) {
      vector<long long>a(n);
      long long count=0;
for(int j=0;j<n;j++){
       a[j]=0;
    }
     int index2=1;
    for(int index=1,j=index2;index<=n-4;){
        int i=index-1;
        
        if((j+4<=n) && ((ar[i]+ar[i+2]-ar[i+4])==(ar[j]+ar[j+2]-ar[j+4])) && a[i]!=1 && a[i+2]!=1 &&a[i+4]!=1 &&a[j]!=1 &&a[j+2]!=1 &&a[j+4]!=1 )
        {
         count++;
         a[i]++;
         a[i+2]++; 
         a[i+4]++; 
         a[j]++;
         a[j+2]++; 
         a[j+4]++; 
        j++;
         
        }
        else if((j+4<=n) && ((ar[i]+ar[i+2]-ar[i+4])!=(ar[j]+ar[j+2]-ar[j+4])) ){
            j++;
            
        }
        else if((j+4<=n) &&  (a[i]==1 || a[i+2]==1 || a[i+4]==1 || a[j]==1 || a[j+2]==1 || a[j+4]==1)){
           j++;
        }
        else{
            index++;
            j=index2;
        }

    }
    return count;

}


int main() {
   int t,n;
   cin>>t;
   vector<long long> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>n;
       vector<long long> arr(n);
       for(int j=0;j<n;j++){
       cin>>arr[j];
    }
    farr[i]=love(arr,n);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}