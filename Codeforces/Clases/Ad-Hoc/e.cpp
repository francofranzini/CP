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
	int n, dir; cin >> n;
	queue<int> cero, uno;
	long long t;
	forn(i, n){
		cin >> t >> dir;
		if(dir == 1) uno.push(t);
		else cero.push(t);
	}	
	

	if(cero.size() == 0) dir = 1;
	if(uno.size() == 0) dir = 0;
	if(uno.size() && cero.size() && cero.front() < uno.front()) dir = 0;
	if(uno.size() && cero.size() && uno.front() < cero.front()) dir = 1;

	if(dir) t = uno.front() + 10;
	else t = cero.front() + 10;
	
	while(uno.size() || cero.size()){
		int flag = 0;
		if(dir){
			while(uno.size() && t > uno.front()){
				t = uno.front() + 10;
				uno.pop();
			} 
			while(cero.size() && t > cero.front()){
				flag = 1;
				cero.pop();
			}
		}
		else{
			while(cero.size() && t > cero.front()){
				t = cero.front() + 10;
				cero.pop();
			}
			while(uno.size() && t > uno.front()){
				flag = 1;
				uno.pop();
			}
		}
		//hay gente para la vuelta
		if(flag){
			if(dir) dir = 0;
			else dir = 1;
			t += 10;
		}
		else{ // se va al siguiente para la vuelta
			if(cero.size() == 0 && uno.size() == 0) continue;
			if(cero.size() == 0){
				dir = 1;
				t = uno.front() + 10;
				uno.pop();
			} 
			if(uno.size() == 0){
				dir = 0;
				t = cero.front() + 10;
				cero.pop();
			}
			if(uno.size() && cero.size() && cero.front() < uno.front()){
				dir = 0;
				t = cero.front() + 10;
				cero.pop();
			} 
			if(uno.size() && cero.size() && uno.front() < cero.front()){
				dir = 1;
				t = uno.front() + 10;
				uno.pop();
			} 
		}
	}

	
	
	cout << t << "\n";

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