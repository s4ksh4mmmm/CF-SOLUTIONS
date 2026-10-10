#include <bits/stdc++.h>
using namespace std;
string convience(int x,int y,int r) {
  int xp=x+r;
  int yp=y;
  return to_string(xp)+" "+to_string(yp);
}


int main() {
   int t,x,y,r;
   cin>>t;
   
   
   vector<string> farr(t);
    
    for(int i=0;i<t;i++){
        cin>>x;
       cin>>y;
       cin>>r;
    farr[i]=convience(x,y,r);
}
for(int i=0;i<t;i++){
        cout<<farr[i]<<endl;
    }

}