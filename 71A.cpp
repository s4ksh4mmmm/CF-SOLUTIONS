#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>> n;
    string arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
   for(int j=0;j<n;j++){
    string str=arr[j];
    int l=str.length();
    if(l>10){
    cout<<str[0]<<l-2<<str[l-1]<< "\n";
    }
    else {
    cout<< str<< "\n";
    }
}
 return 0;
}
   
