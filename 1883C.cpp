#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int raspberry(int ar[],int n,int k) {
    
    int count=0;
    int MIN=INT_MAX; 
     if(k!=4){
    for(int i=0;i<n;i++){
        int check=k-ar[i];
        if(check>0){
            count =check;
        }
        if(check<0){
            count =k-(ar[i]%k);
        }
       if(ar[i]%k==0 || check==0){
            MIN=0;
            break;
        }
        if(count<MIN){
            MIN=count;
        }
    }
}
else {
    int CE = 0, C4 = 0, C3 = 0;
    for (int i = 0; i < n; i++) {
        if (ar[i] % 4 == 0) C4++;
        if (ar[i] % 2 == 0) CE++;
        if (ar[i] % 4 == 3) C3++;
    }

    if (C4 > 0 || CE >= 2) {
        MIN = 0;
    }
    else if (CE == 1 || C3 > 0) {
        MIN = 1;
    }
    else {
        MIN = 2;
    }
}
    return MIN;
    
}

int main() {
   int t,n,k;
   cin>>t;
    int farr[t];
    
    for(int i=0;i<t;i++){
        cin >> n;
        cin>> k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    farr[i]=raspberry(ar,n,k);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}