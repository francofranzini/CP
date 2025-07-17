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
const int MAXN = 1e6 + 3;

int n;
long long a[MAXN];

/*
  Para el franco del futuro
  si hago dp(n) = dp(n-1) + ... + dp(n-6)
  el arbol de llamadas se hace enorme y se rompe la memo (llamadas 6^n)
  si vas de 0 a n se hace linealmente
  opcional: limitar las llamadas
  for (int i = 0; i <= n; i += BLOCK_SIZE) {
        int end = min(i + BLOCK_SIZE, n);
        dp(end); // Calcula el bloque actual
    }
*/


void solve(){
	cin >> n;
  forn(i, n+1) a[i] = 0;
  a[0] = 1; a[1] = 1; a[2] = 2; a[3] = 4; a[4] = 8; a[5] = 16; a[6] = 32; 
  for(int i = 6; i <= n; i++){
    long long rta = 0; 
    for(int j = 1; j<=6;j++) rta+= a[i-j];
    a[i] = rta%MOD;
  }
  cout << a[n] << "\n";
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