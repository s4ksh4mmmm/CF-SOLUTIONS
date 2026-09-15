//kind of wrong code neeed to be fixed for hidden cases
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
string check(int ar[],int size){
    string ch;
    int narr[size];
    int c=0;
    for(int i=0;i<size;i++){
       narr[i]=ar[i];
        }
    
       for(int i=0;i<size;i++){
        if(ar[i]==i+1){
            narr[i]=ar[i];
            continue;
        }
        else{
           for(int j=0;j<size;j++){
               if(ar[j]==i+1){
                narr[i]=ar[j];
                narr[j]=ar[i];
                c++;
               }
           }
           
        }
        if(c==1){
            break;
        }
       }
    
    sort(ar,size);
    bool f=true;
    for(int i=0;i<size;i++){
        if(narr[i]!=ar[i]){
         f=false;
        }
    }
if(f==false){
    ch="NO";
}
else{
    ch="YES";
}


return ch;
}

int main()
{
    int t;
    cin >> t;
    int n;
    string farr[t];
    for(int i = 0; i < t; i++){
        cin >> n;
        int arr[n];
        for(int j = 0; j < n; j++){
            cin >> arr[j];
        }
       
        farr[i]=check(arr,n);
    }
    for(int j = 0; j < t; j++){
        cout << farr[j] << endl;
    }
    return 0;
}
