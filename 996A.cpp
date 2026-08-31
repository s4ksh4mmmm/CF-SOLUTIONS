#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int arr[5]={1,5,10,20,100};
    long c=0;
    
    for(int i=1;i>0;i++){

        for(int j=4;j>=0;j--){
            long long k =n;
        n=n-arr[j];
            if(n>=0){
                c++;
                break;
            }  
            else{
                n=k;
            }     
    }
    if(n==0){
    break;
    }
    }
    cout<<c;
    return 0;
}