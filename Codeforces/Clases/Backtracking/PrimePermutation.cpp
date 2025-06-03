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
set<int> usados;
vector<int> rta;

int es_primo(int i){
	int a[34] = {0,0,1,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0};
	return a[i]; 
}

int posible(int i, int ultimo){
	return (usados.find(i) == usados.end() && es_primo(ultimo + i));
}

void imprimir(int n){
	forn(i, n) cout << rta[i] << " ";
	cout << "\n";
}
void backtrack(int j, int n, int ultimo){
	if(j == 0){
		if(es_primo(ultimo + 1)) imprimir(n);

		return;
	}
	for(int i = 1; i<n; i++){
		if(posible(i+1, ultimo)){
			usados.insert(i+1);
			rta.push_back(i+1);
			backtrack(j - 1, n, i+1);
			rta.pop_back();
			usados.erase(i+1);
		}
	}

}

void solve() {
	rta.push_back(1);
	int n; cin >> n;
	backtrack(n-1, n, 1);
}
int main() {
    fastio;
    int t = 1;
    // Uncomment the next line if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}