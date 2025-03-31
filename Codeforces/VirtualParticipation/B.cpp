#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

void solve(){
    int n;
    long int x;
    cin >> n >> x;
    long a[n];
    forn(i,n){
        cin >>a[i]; 
    }
    sort(a, a+n, [](int x, int y){ return x > y;});
    //[6 6 3 3 2 1]
    long long integrantes = 0;
    long long fuerza;
    int equipos = 0; 
    forn(i,n){
        integrantes++;
        fuerza = a[i];
        if(integrantes * fuerza >= x){
            equipos++;
            integrantes = 0;
        }
    }
    cout << equipos << "\n";

}

int main(){
    int t;cin>>t;
    while(t--) solve();
    return 0;
}