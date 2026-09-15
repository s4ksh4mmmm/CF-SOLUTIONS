#include <bits/stdc++.h>
using namespace std;

// Pass the 2D vector by reference (&) to avoid copying data unnecessarily
string identical(const vector<vector<char>>& ar, int x, int y) {
    string result;
    int p = -1;
    
    // We use 'i' as the loop variable to check each column from 0 to y-1
    for (int i = 0; i < y; i++) {
        if (((ar[1][i] == 'G' || ar[1][i] == 'B') && (ar[0][i] == 'G' || ar[0][i] == 'B'))) {
            continue;
        }
        else if (ar[1][i] == 'R' && ar[0][i] == 'R') {
            continue;
        }
        else {
            p = 1;
            break; // Mismatch found, no need to check further
        }
    }
    
    if (p == -1) {
        result = "YES";
    }
    else {
        result = "NO";
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    
    // Dynamic vector instead of a raw string array string farr[t]
    vector<string> farr(t);
    
    for (int i = 0; i < t; i++) {
        int c;
        cin >> c;
        
        // Dynamically creates a 2D vector with 2 rows and 'c' columns
        vector<vector<char>> arr(2, vector<char>(c));
        
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < c; k++) {
                cin >> arr[j][k];
            }
        }
        
        // Correct vector syntax when passing to the function
        farr[i] = identical(arr, 2, c);
    }
    
    for (int k = 0; k < t; k++) {
        cout << farr[k] << "\n";
    }
    
    return 0;
}