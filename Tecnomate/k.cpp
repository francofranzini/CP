#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;
ll A[100001];
map<ll,ll> a;
int main(){
    int n, q;
    cin >> n >> q;
    int x;
    int rep = 1;
    forn(i, n){
        cin >> x;
        if(!a[x]) a[x] = 1;
        else{
            rep++;
        }
        A[i] = rep;
        
    }
    vector<ll> rta;
    int s;
    int len;
    forn(i, q){
        int a, b;
        cin >> a >> b;
        len = b - a + 1;
        s = (b + A[b-1]) - (a + A[(a-1)]);
        rta.push_back(s);
    }
    for(auto a: rta) cout << a << "\n";

    return 0;
}