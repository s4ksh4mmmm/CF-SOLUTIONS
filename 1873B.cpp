#include <bits/stdc++.h>
using namespace std;

long long goodkid(int ar[], int size){
    long long max = 0;
    for(int i = 0; i < size; i++){
        long long p = 1;
        int c = ar[i] + 1;
        for(int j = 0; j < size; j++){
            if(j == i){
                p = p * c;
            }
            else{
                p = p * ar[j];
            }
        }
        if(p > max){
            max = p;
        }
    }
    return max;
}

int main()
{
    int t;
    cin >> t;
    int n;
    long long farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        farr[i] = goodkid(arr, n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
