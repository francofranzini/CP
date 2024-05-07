#include <iostream>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

int ST_LEN = 2 << 10;

long long tree[2*ST_LEN];
int query_low, query_high;

long long getST(int nodo, int l, int r){
    if(l >= query_low && r <= query_high) return tree[nodo];
    if (query_high <= l || r >= query_low) return 0;
    
    long long m = (l+r)/2
    return getST(nodo*2, l, m) + getST(nodo*2 + 1, m, r)
}

int getSTaux(int low, int high){
    query_low = low;
    query_high = high;

    return getST(1, 0, ST_LEN);
}


void setST(int a, int b){
    
}

int main (){
    
    int q, n;
    cin >> n >> q;

    forn(i, n){
        //Ingresar los valores al segment
//        cin >>segmentTree(i) 
    }
    //Procesar la q queries
    int modo;
    //1 update
    //2 sum in range
    forn(i, q){
        cin >> modo;
        if(modo == 1){
            //update ST
        }
        else{
            //getST in range (a,b)
            //save query
        }
    }

    return 0;
}
