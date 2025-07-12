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

   
void solve() {
	int n, k;
    cin >> n >> k;
    int cant[2*n + 2];
    forn(i,2*n+2) cant[i] = 0;
    int a[n];
    forn(i, n){
        cin >> a[i];
        cant[a[i]]++;
    }
    int score = 0;
    forn(i, n){
        int aux = a[i];
        if(aux == k - aux){
            score += (cant[aux]/2);
            cant[aux] = 0;
        } 
        else{
            if( k - aux >= 0&&cant[aux] && cant[k - aux]){
                score += min(cant[aux], cant[k-aux]);
                cant[aux] = 0;
                cant[k-aux] = 0;
            }
        }
    }
    cout << score << "\n";
    
}
int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}