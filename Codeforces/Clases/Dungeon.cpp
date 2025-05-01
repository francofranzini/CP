#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)


void solve(){
    int a[3], sum = 0, r;
    forn(i,3) {
        cin >> a[i];
        sum += a[i];
    }
    r = sum / 9;
    if(sum % 9 == 0 && a[0] >= r && a[1] >= r && a[2] >= r) cout << "YES";
    else cout << "NO";
    cout << "\n";
}

int main(){
    int t;
    cin >> t;
    // t = 1;
    while(t--){
        solve();
    }
 
    return 0;
}