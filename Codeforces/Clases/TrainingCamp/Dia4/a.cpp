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
      int n = sz(s), m = 0;
      vector<int> canta(n+1,0), cantb(n+1,0);
      canta[0] = 0; cantb[0] = 0;
      forn(i,n){
        canta[i+1] += canta[i] + (s[i] == 'a' ? 1 : 0);
        cantb[i+1] += cantb[i] + (s[i] == 'b' ? 1 : 0);
      }

      forn(i,n+1){
        for(int j = i; j < n+1; j++){
          m = max(m, n-cantb[i]-canta[i]-cantb[])
        }
      }
    }
     
    int main(){
      fastio;
      int tt = 1;
      //  cin >> tt;
      while(tt--)
        solve();
    }