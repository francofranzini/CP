#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;

int main(){
    ll m, tot = 0; cin >> m;

    forn(i, m){
        ll aux;
        cin >> aux;
        tot += aux;
    }

    if(tot == m) cout << -1;
    else cout << m+1;

    return 0;
}