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
const int MAXN = 100001;
// const long MOD = 10e9 + 7;
 
 
int n;
map<int, int> a;
// int a[MAXN][MAXN];
 
 
long dp(int k){
  if(k < 0) return 0;
  if(k == 0) return 1;
  if(a[k]) return a[k];
  long long rta = (dp(k-1) + dp(k-2) + dp(k-3) + dp(k-4) + dp(k-5) + dp(k-6)) % MOD;
  a[k] = rta;
  return rta;
}
 
void solve(){
  cin >> n;
  forn(i, n) a[i] = 0;
  long long rta = dp(n);
  cout << rta << "\n";
}
 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
}