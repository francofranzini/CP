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
typedef set<int> si;

// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

vector<pii> backtrack(int n, vi columnas, vi d1, vi d2, int fila, vector<pii> tablero){
	if(fila == n) return tablero;
}

void solve() {
	int n;
	cin >> n;
	vector<vector<pii>> rta;
	vector<pii> aux;
	vi d1, d2, columnas;
	forn(i, n){
		aux = backtrack(n, columnas, d1, d2, i)
	}

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