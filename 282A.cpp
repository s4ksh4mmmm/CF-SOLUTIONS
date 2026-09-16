#include <bits/stdc++.h>
using namespace std;
int bit(string x,int y) {
  int count=y;
   if(x=="X++"){
   count++;
   }
   else if(x=="X--") {
   count--;
   }
   else if(x=="++X") {
      ++count;
   }
   else{
    --count;
   }
return count;

}

int main() {
    int n;
    cin >> n;int result=0;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
    result=bit(s,result);
    }
    cout<<result;
    return 0;
}