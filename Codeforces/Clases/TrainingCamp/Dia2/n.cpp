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

void solve(){
  string s; cin >> s;
  int pos[30], cost = 0;
  forn(i,sz(s)){
    pos[s[i]-'a'] = i;
  }

  string w; cin >> w;
  int aux = pos[w[0]-'a'];
  for(int i = 1; i < sz(w); i++){
    cost += abs(pos[w[i]-'a'] - aux);
    aux = pos[w[i]-'a'];
  }

  cout << cost << endl;
}

int main(){
  fastio;
  int tt; cin >> tt;
  while(tt--)
    solve();
}