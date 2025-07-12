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
      int n; cin >> n;
      map<int, pair<int, int>> datos;
      set<int> posiciones;
      int beacons = 1;
      int activan = 1;
      posiciones.insert(0);
      datos[0] = {0, 0};
      forn(i, n){
        int x, y;
        cin >> x >> y;
        posiciones.insert(x);
        datos[x] = {y, 0};
      }

      if(datos[0].first != 0) datos[0].second = 1;
      
      for(auto x = posiciones.begin(); x != posiciones.end(); x++){
        if(*x == 0) continue;
        auto k = posiciones.lower_bound(*x - datos[*x].first);
        if(*k != 0) k--;
        int activan = datos[*k].second + 1;
        datos[*x].second = activan;
      }


      vector<int> seactivan;
      for(auto a: posiciones){

        seactivan.pb(datos[a].second);
      }
      int maxx = 0;
      for(int i = n; i >= 0;i--){
        maxx = max(seactivan[i], maxx);
      }
      cout << n - maxx << "\n";
      
      
      
    }
     
    int main(){
      fastio;
      int tt = 1;
      //  cin >> tt;
      while(tt--)
        solve();
    }