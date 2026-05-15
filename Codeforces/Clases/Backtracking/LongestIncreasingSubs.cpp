#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fi first
#define se second
#define forn(i, n) for(int i = 0; i<n; i++)

// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

int LIS(int a[], int ultimo, int r, int n, int i){
    if(i == n) return r;
    if(a[i] > ultimo){
        r = max(LIS(a, a[i], r+1, n, i+1), LIS(a, ultimo, r, n, i+1));
        return r;
    }
    else{
        return LIS(a, ultimo, r, n, i+1);
    }
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    forn(i,n) cin >> a[i];
    int rta = 0;
    forn(i, n){
        rta = max(rta, LIS(a, a[i], 1, n, i));
    }
    cout << rta << "\n";
    


}

int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}