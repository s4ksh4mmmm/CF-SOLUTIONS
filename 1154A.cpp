
#include <bits/stdc++.h>
using namespace std;

string threenumbers(int ar[],int size) {
    sort(ar,ar+size);
 string result;
 int apbpc=ar[3];
  int apb=ar[0];
   int bpc=ar[1];
   int cpa=ar[2];
int cda=bpc-apb;
int c=(cda+cpa)/2;
int a=cpa-c;
int b=apb-a;
result=to_string(a)+" "+to_string(b)+" "+to_string(c);
return result;
}

int main() {
    int arr[4];
    string abc;
     for(int j=0;j<4;j++){
       cin>>arr[j];
    }
      abc=threenumbers(arr,4);
        cout<<abc<<endl;
    return 0;
}