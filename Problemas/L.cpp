#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


int n, t;

int main(){
    cin >> t;
    vector<int> rtas;
    forn(i, t){
        cin >> n;
        int rta = 0;
        while (n > rta){
            ++rta;
            n -= rta;
        }
        rtas.push_back(rta);
    }
    for(auto a: rtas) cout << a << "\n";

    return 0;
}