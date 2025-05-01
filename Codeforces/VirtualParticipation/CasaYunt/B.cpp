#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

void solve(){
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 + n2 == 3) cout << 3 << endl;
    if(n1 + n2 == 4) cout << 2 << endl;
    if(n1 + n2 == 5) cout << 1 << endl;

}

int main(){
    int t = 1;
    while(t--) solve();
    return 0;
}