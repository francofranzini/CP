#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;

vector<ll> rta;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    else return gcd(b, a%b);
}

int main(){
    int t; cin >> t;

    forn(i, t){
        ll bt, bl, ht, hl;
        cin >> ht >> bt;
        cin >> hl >> bl;
        ll a = bt - bl, b = ht - hl;
        ll tot = a*b/(gcd(a, b));
        rta.push_back(tot);
    }

    for(auto a: rta) cout << a << "\n";

    return 0;
}