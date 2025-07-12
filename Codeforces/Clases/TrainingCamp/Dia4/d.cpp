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
    
 
    /*
    a tiempos de enfriamiento
    T tiempo total
    rta acumulado de comidas
    s segundos que pasaron
    n cantidad total de bowls
    k bowl actual (siempre es el siguiente)
    */
    
    int backtrack(int a[], int T, int rta, int s, int n, int k){
      if(k == n+1 || s >= T) return rta;
      if(s >= a[k]){
        return backtrack(a, T, rta+1, s+1, n, k+1);
      }
      int x, y;
      if(s + (a[k] - s) >= T) x = rta; // no lo llega a esperar
      else x = backtrack(a, T, rta + 1, s + (a[k] - s) + 1, n, k+1); //esperar y come
      y = backtrack(a, T, rta, s + 1, n, k+1); //seguir


      int rta;
      if(x > y) rta = x;
      else rta = y;

      return rta;
 
    }
 
    void solve(){
      int n; cin >> n;
      int T; cin >> T;
      int a[n+2];
      forn(i, n) cin >> a[i+1];
      int rta = 0;
      rta = backtrack(a, T, 0, 1, n, 1);
      cout << rta << "\n";
    }
     
    int main(){
      fastio;
      int tt = 1;
      //  cin >> tt;
      while(tt--)
        solve();
    }