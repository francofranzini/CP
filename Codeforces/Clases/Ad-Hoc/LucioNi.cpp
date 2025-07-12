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

   
void solve() {
	int n; cin >> n;
  int pares[n], impares[n];
  int par = 0, impar = 0;
  forn(i,n){
    int aux; cin >> aux;
    if(aux % 2 == 0){
      pares[par++] = aux;
    }else{
      impares[impar++] = aux; 
    }
  }
  if(abs(par - impar) <= 1){
    cout << 0 << "\n";
    return;
  }else{
    int dif;
    if(par > impar) dif = par - (impar + 1);
    else dif = impar - (par + 1);

    int suma = 0;
    if(par > impar){
      sort(pares, pares + par);
      forn(i, dif) suma += pares[i];
    }
    else{
      sort(impares, impares + impar);
      forn(i, dif) suma += impares[i];
    }
    cout << suma << "\n";
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