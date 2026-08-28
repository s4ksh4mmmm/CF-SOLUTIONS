#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;//total contestants
    cin>> size;
    int p;//positon to be found;
    cin>> p;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int c=0;// total contestants who advance to next round
    for(int j=0;j<size;j++){
        if(arr[j]>=arr[p-1] && arr[j]!=0){
        c++;
        }
    }
cout<< c;
return 0;
}
