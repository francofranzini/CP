#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

vector<long long> tree;

long long getST(int node, int node_low, int node_high, int query_low, int query_high){
    if(query_low <= node_low && node_high <= query_high) return tree[node];

    if(node_low > query_high || query_low > node_high) return 0;

    int last_in_left = (node_low + node_high)/2;

    return getST(2*node, node_low, last_in_left, query_low, query_high) + 
           getST(2*node + 1, last_in_left+1, node_high, query_low, query_high);
}
//un arbol de segmentos
//basicamente esto mira
//lo que hace es ir guardando la suma de los rangos en el arbol
//y calcula tanto las actualizaciones de la lista original
//como la suma en los rangos en tiempo logaritmico



 
int main(){
    int n, q, x;
    cin >> n >> q;
    vector<int> a;
    //De 0 a (n-1) se llena con los valores del array
    for(int i = 0; i<n; i++){
        cin >> x;
        a.push_back(x);
    }

    int result = 1;
    while(result < n){
        result <<= 1;
    }
    n = result;

    tree.resize(2*n);

    //set tree[n..2*n] con los valores de a[]
    for(int i = 0; i<n; i++){
        tree[n+i] = a[i];
    }

    //set tree[0..n-1]
    for(int i = n-1; i>0; i--){
        tree[i] = tree[2*i] + tree[2*i + 1];
    }

    vector<long long> rta;
    for(int i = 0; i<q; i++){
        int lo, hi;
        cin >> lo>> hi;
        lo--;
        hi--;
        long long b = getST(1, 0, n-1, lo, hi);

        rta.push_back(b);
    }
    for(auto a: rta){
        cout << a << "\n";
    }

    
 
    return 0;
}