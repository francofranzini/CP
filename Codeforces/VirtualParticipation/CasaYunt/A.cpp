#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

void solve(){
    int n,x, rta = 0;
    cin >> n;
    forn(i, n){
        cin >> x;
        if(i%2 == 0) rta += x;
        else rta -= x;
    }
    cout << rta << "\n";

}

int main(){
    int t;cin>>t;
    while(t--) solve();
    return 0;
}