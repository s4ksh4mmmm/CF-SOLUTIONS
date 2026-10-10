#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string n;
    cin >> n;
 
    string rev(n.rbegin(), n.rend());
 
    cout << n << rev << "\n";
 
    return 0;
}
