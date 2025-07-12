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
const int MAXN = 2e5+10;

int T, n;
int a[MAXN];
/*
a tiempos de enfriamiento
T tiempo total
rta acumulado de comidas
s segundos que pasaron
n cantidad total de bowls
k bowl actual (siempre es el siguiente)
*/
map<pii, int> memo;

int backtrack(int s, int k){
    if(memo.find({s,k}) != memo.end()) return memo[{s,k}];
    
    if(k == n+1 || s >= T) return 0;
    
    if(s >= a[k]){
        int ans = backtrack(s+1, k+1)+1;
        memo[{s,k}] = ans;
        return ans;
    }

    int x = 0, y;
    if(a[k] < T) x = backtrack(a[k]+1, k+1) + 1; //esperar y come
    y = backtrack(s+1, k+1); //seguir
    memo[{s,k}] = max(x,y);
    return max(x,y);
}

void solve(){
    cin >> n >> T;
    forn(i, n) cin >> a[i+1];
    int rta = 0;
    rta = backtrack(1, 1);
    cout << rta << "\n";
}
    
int main(){
    fastio;
    int tt = 1;
    //  cin >> tt;
    while(tt--)
    solve();
}