#include <bits/stdc++.h>
using namespace std;
void sort(int array[], int size) {
    int temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
int candies(int ar[],int s){
int min=ar[0];
int count=0;
 for(int i=0;i<s;i++){
     int p=ar[i];
     for(int j=p;j>min;j--){
        count++;
     }
 }
 return count;
}

int main()
{
    int t;
    cin >> t;
    int n;
    int farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
        sort(arr,n);
        farr[i]=candies(arr,n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
