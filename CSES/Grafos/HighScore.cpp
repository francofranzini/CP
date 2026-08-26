#include <bits/stdc++.h>
using namespace std;
 
// Macros
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()
#define pb push_back
#define fi first
#define se second
#define forr(i, a, b) for(int i = (int)a; i<(int)b; i++)
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
const int MAXN = 2502;
// const long MOD = 10e9 + 7;
 
 
int n, m;
vector <tuple<int, int, int>> edges;
vector<int> neg[MAXN];
bool alcanza_n[MAXN];
ll distancias[MAXN];
ll suma;

void dfs(int i){
    if(alcanza_n[i]) return;
    alcanza_n[i] = true;
    for(auto x: neg[i]){
        dfs(x);
    }
}


void solve(){
    cin >> n >> m;
    forn(i, n+1) distancias[i] = LINF;
    forn(i, n+1) alcanza_n[i] = false;
    forn(i, m){
        int x, y, c;
        cin >> x >> y >> c;
        edges.pb({x, y, -c});
        neg[y].pb(x);
    }
    distancias[1] = 0;
    forn(i, n-1){
        for(auto e: edges){
            int a, b, w;
            tie(a, b, w) = e;
            if(distancias[a] != LINF)
                distancias[b] = min(distancias[b], distancias[a]+w);
        }
    }
    //Aca distancias ya tiene todo lo que necesita
    bool bucle_infinito = false;
    dfs(n);
    for(auto e: edges){
        int a, b, w;
        tie(a, b, w) = e;
        if(distancias[b] > distancias[a] + w && alcanza_n[a] && distancias[a] != LINF) bucle_infinito = true; //Encuentro uno mas
    }
    if(bucle_infinito) cout << -1 << "\n";
    else cout << -distancias[n] << endl;
    



} 
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
    solve();

  return 0;
}