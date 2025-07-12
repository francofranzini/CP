#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fst first
#define snd second
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

void solve(){
  ll n, m; cin >> n >> m;
  vector<pair<ll,ll>> v;
  vector<pair<pair<ll,ll>,ll>> dif;
  forn(i,n){
    ll l, r; cin >> l >> r;
    v.pb({l,r});
  }

  forn(i,n-1){
    dif.pb({{v[i+1].snd-v[i].fst, v[i+1].fst - v[i].snd},i});
  }
  sort(dif.begin(), dif.end());

  vector<pair<ll,ll>> bridge;
  forn(i,m){
    ll a; cin >> a;
    bridge.pb({a,i});
  }
  sort(bridge.begin(), bridge.end());
  
  vector<ll> ans(n);
  ll bi = 0, cont = 0;
  forn(i,n-1){
    while(bi < m && bridge[bi].fst < dif[i].fst.snd) bi++;
    if(bi >= m) break;

    if(bridge[bi].fst >= dif[i].fst.snd && bridge[bi].fst <= dif[i].fst.fst){
      ans[dif[i].snd] = bridge[bi].snd+1;
      bi++;
      cont++;
      if(cont == n-1) break;
    } else {
      break;
    }
  }

  if(cont < n-1) cout << "No" << endl;
  else{
    cout << "Yes" << endl;
    forn(i,n-1) cout << ans[i] << " ";
    cout << endl;
  }
}

int main(){
  fastio;
  int tt = 1;
  //  cin >> tt;
  while(tt--)
    solve();
}