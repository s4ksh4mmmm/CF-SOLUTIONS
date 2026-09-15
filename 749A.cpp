
#include <bits/stdc++.h>
using namespace std;
int bachgold(int x){
     int count=0;
     for(int i=x;i!=0;){
     if(i==2 || (i-2)!=1 ){
        count++;
        i=i-2;
     }
     else{
        count++;
        break;
     }
     }
     return count;
}



int main()
{
    int n;
        cin >> n;
        int c=bachgold(n);
    cout<<c<<endl;
    for(int i=n;i!=0;){
     if(i==2 || (i-2)!=1 ){
       cout<<2<<" ";
        i=i-2;
     }
     else{
        cout<<i;
        break;
     }
     }
    return 0;
}
