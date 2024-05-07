#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;

int main(){
    
    int g, n;
    cin >> g;

    vector<char> rta;
    forn(i, g){
        string game;
        cin >> n;
        cin >> game;
        rta.push_back(game[n-1]);
    }
    for(auto a: rta) cout << a << "\n";
    



    return 0;
}