
#include <bits/stdc++.h>
using namespace std;


int main() {
    int t,x,y;
    cin >> t;
     int farr[t][2];
    for(int i=0;i<t;i++){
        cin>>x;
        cin>>y;
        
       farr[i][0]=min(x,y);
       farr[i][1]=max(x,y);
        
        }

      
    for(int i=0;i<t;i++){
        cout<<farr[i][0]<<" "<<farr[i][1]<<endl;
    }
    return 0;
}