#include <bits/stdc++.h>
using namespace std;
int minschools(int n,int k,string s){
      int f=n/k;
    int p=0;
   int count=0;//to count school to be build on rohj farm
         for(int i=1;i<=f;i++){
       string sub=s.substr(p,k);
       int h=0;//test variable to check how many fields are of roh
       int flag=-1;
       for(int j=0;j<k;j++){
        if(sub[j]=='0'){
          flag=0;
        }
           if(sub[j]=='1'){
         h++;
           }
       }
       if(h>=1 && flag!=0){
            count++;
           }
       p=p+k;
      }
      return count;
}
int main(){
int t;
cin>> t;//number of test case
int arr[t];
string s;
int n;
int k;
for(int i=0;i<t;i++){
    cin>>n;
    cin>>k;
    cin>>s;
    arr[i]=minschools(n,k,s);
}
for(int i=0;i<t;i++){
    cout<<arr[i]<<endl;
}
return 0;
}