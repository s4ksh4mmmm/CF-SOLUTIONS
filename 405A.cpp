
#include <bits/stdc++.h>
using namespace std;





  
int main() {
    int c;
    cin >> c;
    
    int farr[c];
    for(int i=0;i<c;i++){
       cin>>farr[i];
      
    }
    sort(farr,farr+c);
    for(int i=0;i<c;i++){
       cout<<farr[i]<<" ";
      
    }
        
    
    return 0;
}