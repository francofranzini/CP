#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)


void solve(){
    long int n; cin >> n;
    long int caramelos[n], naranjas[n];
    forn(i,n){
        cin >> caramelos[i];
    }
    forn(i,n){
        cin >> naranjas[i];
    }

    long int min_caramelos = caramelos[0];
    long int min_naranjas = naranjas[0];
    forn(i,n) min_caramelos = min(caramelos[i], min_caramelos);
    forn(i,n) min_naranjas = min(naranjas[i], min_naranjas);

    long long int rta = 0;
    forn(i,n){
        if(caramelos[i] > min_caramelos && naranjas[i] > min_naranjas){
            long int x = min(caramelos[i] - min_caramelos, naranjas[i] - min_naranjas);
            rta+= x;
            caramelos[i]-=x; naranjas[i]-=x;
        }
        if(caramelos[i] > min_caramelos){
            long int x = caramelos[i] - min_caramelos;
            rta += x;
            caramelos[i]-= x;
        }
        if(naranjas[i] > min_naranjas){
            long int x = naranjas[i] - min_naranjas;
            rta += x;
            naranjas[i]-= x;
        }
    }
    cout << rta << "\n";
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}