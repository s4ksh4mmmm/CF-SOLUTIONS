#include <bits/stdc++.h>
using namespace std;
int balloon(string x,int l){
int count=0;

for(char ch='A';ch<='Z';ch++){
    int c=0;
    for(int i=0;i<l;i++){
    if(ch==x[i]){
        c++;
    }
    }
    if(c>=1){
    count=count + (2+(c-1));
    }
}
 return count;   
}
   
int main(){
    int n,len;
    cin>> n;
    int arr[n];
    string s;
    for(int i=0;i<n;i++){
        cin>>len;
        cin>>s;
        arr[i]=balloon(s,len);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
return 0;
    }