#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;

int main(){
    int t; ll m; cin >> t;
    vector<long long> rta;
    forn(i, t){
        cin >> m;
        rta.push_back((m*(m+1)*(2*m+1))/6 + m*(m+1)/2 - m);
    }
    for(auto a: rta) cout << a << "\n";

    return 0;
}