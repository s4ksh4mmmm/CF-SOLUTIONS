#include <bits/stdc++.h>
using namespace std;
int findpair(int x){
int c=0;
int a=max(x/2,(x-(x/2)));
int b=min(x/2,(x-(x/2)));

if(a!=b){
    c=b-1;
}
else {
    c=0;
}
}