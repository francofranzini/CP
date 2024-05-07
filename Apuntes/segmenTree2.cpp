#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int const ST_LEN = 1 << 20;
long long tree[2*ST_LEN];
int query_low, query_high;

long long getST(int nodo, int l, int r){
    if( query_low <= l &&  r <= query_high) return tree[nodo];

    if(query_high <= l || r <= query_low) return 0;

    long long m = (l + r) / 2;
    return getST(2*nodo, l, m) + getST(2*nodo + 1, m, r);
}

long long getSTaux(int ql, int qr){
    query_low = ql;
    query_high = qr;
    return getST(1, 0, ST_LEN);
}

void updateST(int a, int b){
    a += ST_LEN;
    tree[a] = b;
    for(int j = a/2; j>= 1; j /= 2) tree[j] = tree[j*2] + tree[j*2 + 1];
}

void init(){
    for(int i = 0; i<2*ST_LEN; i++){
        tree[i] = 0;
    }
}
 
int main(){
    int n, q, x;
    cin >> n >> q;
    vector<int> a;
    //De 0 a (n-1) se llena con los valores del array
    init();
    for(int i = 0; i<n; i++){
        cin >> x;
        a.push_back(x);
        updateST(i, x);
    }


    vector<long long> rta;
    for(int i = 0; i<q; i++){
        int lo, hi, modo;
        cin >> modo >>lo>> hi;
        lo--;
        if(modo == 1) updateST(lo, hi);
        else {
            long long b = getSTaux(lo, hi);
            rta.push_back(b);
        }

    }
    for(auto a: rta){
        cout << a << "\n";
    }
 
    return 0;
}