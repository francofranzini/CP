#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)


void solve(){
    int n, pares = 0, impares = 0;
    cin >> n;
    int a[n];
    forn(i,n){
        cin >> a[i];
        if(a[i] % 2 == 0) pares++;
        else impares++;
    }
    if(pares%2 == 0 && impares %2 == 0) cout << "YES" << "\n";
    else{
        int consecutivos= 0;
        sort(a, a+n);
        for(int i = 1; i<n; i++){
            if(a[i] == a[i-1]+1){
                cout << "YES" << "\n";
                return;
            } 
        }
        cout << "NO" << "\n";
    }
    
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}