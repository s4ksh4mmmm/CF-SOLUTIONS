#include <bits/stdc++.h>
using namespace std;
string oddeven( int x) {
  string winner;
   if(x%2==0){
   winner="Mahmoud";
   }
   else{
winner="Ehab";
   }
return winner;

}

int main() {
    int n;
    cin >> n;
    string result=oddeven(n);
       cout<<result;
    return 0;
}