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


int se_puede(long long suma_aux, long long a,long long c, long long tot, long long x){
    return ((suma_aux- a - c*tot)>=x);
}   
void solve() {
	int n; cin >> n;
    long long x, k;
    long long suma = 0;
    cin >> k >> x;
    long long a[n];
    long long rta = 0; 
    for(int i = 0; i<n; i++){
        cin >> a[i];
        suma += a[i];

    }
    long long tot = suma;
    suma = suma * k;
    if(suma >= x) rta++;
    for(int i = 0; i<n; i++){
        int s = 0, j = k;
        while(j-s > 1){
            long long c = s + (j-s)/2;
            if(se_puede(suma, a[i],c, tot, x)) s = c;
            else j = c;
        }
         
        if(s != 0) rta += s+1;
        else if(s == 0 && se_puede(suma, a[i], 0, tot, x)) rta++;
        
        suma -= a[i];
    }
    cout << rta << "\n";

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