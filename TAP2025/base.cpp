#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define forn(i, n) for(int i = 0; i<n; i++)
#define MAXN 100001
using namespace std;

int n;
long long k;
long long a[MAXN], casilla[MAXN];
long long p[MAXN][450];

long long dp(int pos, int barco) {
  if (pos >= n) return 0;
  if (p[pos][barco] != -1) return p[pos][barco];

  long long res = dp(pos+1, barco); // no pongo nada en pos

  // calcular costo del barco
  int r = pos + barco - 1;
  if (r < n) {
    long long costo = a[r] - (pos>0 ? a[pos-1] : 0);
    if (costo <= k) {
      res = max(res, k - costo + dp(r+1, barco+1));
    }
  }

  return p[pos][barco] = res;
}

void solve(){
  cin >> n >> k;
  int x;
  cin >> x;
  a[0] = x;
  casilla[0] = x;
  for(int i = 1;i<n;i++) {
    cin >> x;
    casilla[i] = x;
    a[i] = a[i-1]+x;
  }
  a[n] = a[n-1];
  forn(i, MAXN){
    forn(j, 450)
      p[i][j] = -1;
  }

  long long rta;
  rta = dp(0,1);
  cout << rta << "\n";
}

int main(){
  fastio;
  int t = 1;
  // cin >> t;
  while(t--){
    solve();
  }
  return 0;
}