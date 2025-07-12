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
const int MOD = 998244353;

long long backtrack(int x, int n, int a[], vector<int> &p, vector<int> &q, int cp, int cq){
  if(x == 2*n){
    long long sum = 0;
    vector<int> p1, q1;
    p1 = p;
    q1 = q;
    forn(i,n){
      sum = (sum + abs(p1[i] - q1[i])) % MOD;
    }
    return sum;
  }
  if(cp == n){
    q.pb(a[x]);
    long long sum = backtrack(x+1, n, a, p, q, cp, cq+1);
    q.pop_back();
    return sum;
  }
  if(cq == n){
    p.pb(a[x]);
    long long sum = backtrack(x+1, n, a, p, q, cp+1, cq);
    p.pop_back();
    return sum;
  }
  p.pb(a[x]);
  long long sum1 = backtrack(x+1, n, a, p, q, cp+1, cq);
  p.pop_back();
  q.pb(a[x]);
  long long sum2= backtrack(x+1, n, a, p, q, cp, cq+1);
  q.pop_back();
  return (sum1 + sum2) % MOD;

}

void solve(){
  int n; cin >> n;
  int a[2*n+1];
  forn(i,2*n) cin >> a[i];
  vector<int> p, q;
  long long rta;
  rta = backtrack(0,n, a, p, q, 0, 0);
  cout << rta << "\n";
}

int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();
}