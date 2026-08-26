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
#define MAXN 100001    
// Typedefs
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef set<int> si;
    
// Constants
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;
int n, m;
// vector<pii> adj[200002];
ll distancias[200002][2];
vector<pii> adj[200002];

void dijkstra(){
    forn(i, n+1){ distancias[i][0] = LINF; distancias[i][1] = LINF;}
    distancias[1][0] = 0;
    int processed[n+1][2] = {0};
    priority_queue<tuple<long long, long long, int>> q;
    q.push({0, 1, 0});
    while(!q.empty()){
        int a = get<1>(q.top()), estado = get<2>(q.top()); q.pop();
        if(processed[a][estado]) continue;
        processed[a][estado] = true;
        for(auto u: adj[a]){
            ll b = u.fi, w = u.se;
            // seguir en la misma capa, sin gastar el descuento acá
            if(distancias[a][estado] + w < distancias[b][estado]){
                distancias[b][estado] = distancias[a][estado] + w;
                q.push({-distancias[b][estado], b, estado});
            }
            //Meter aca el cambio de estado
            // si todavía tengo el descuento (estado 0), puedo gastarlo en esta arista
            if(estado == 0 && distancias[a][0] + floor(w/2) < distancias[b][1]){
                distancias[b][1] = distancias[a][0] + floor(w/2);
                q.push({-distancias[b][1], b, 1});
            }
        }
    }
    cout << distancias[n][1] << "\n";
}

void solve(){
  cin >> n >> m;
  forn(i, m){
    int a, b, c;
    cin >> a >> b >> c;
    adj[a].push_back({b, c});
  }
  dijkstra();
//   int rta = dijkstra();
//   cout << rta << "\n";

}
    
int main(){
  fastio;
  int tt = 1;
  // cin >> tt;
  while(tt--)
  solve();
}