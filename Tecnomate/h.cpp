#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;
int main(){
    ll p, n; cin >> p >> n;
    ll cont = 0;
    string pal;
    getline(cin, pal);
    getline(cin, pal);

    cout << pal << "\n";
    for(int i = 0; i<n; i++){
        if((pal[i] >= 'a' && pal[i] <= 'z') || (pal[i] >= 'A' && pal[i] <= 'Z'))cont++;
    }
    cout << (cont/2) % p + 1 << "\n";

    return 0;
}