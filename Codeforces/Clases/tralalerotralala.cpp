#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)

void solve(){
    int n;
    cin >> n;
    long double a[n];
    long double s[n];
    long double m;
    int rta = 1;
    forn(i, n){
        cin >> a[i];
        s[i] = ceil((a[i] - i) / (float)n) * n + i;
        if(i == 0) m = s[i];
        if(s[i] < m){
            m = s[i];
            rta = i+1;
        }
    }
    cout << rta << "\n";
    
    
}


int main(){
    int t=1;
    while(t--){
        solve();
    }
 
    return 0;
}