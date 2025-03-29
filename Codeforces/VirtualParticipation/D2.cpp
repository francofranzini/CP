#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int f(int b, int m){
    int mesas_completas = b*(m/(b+1)); //mesa mas un espacio
    int mesas_incompletas = m%(b+1);
    int s= mesas_completas + mesas_incompletas;

    return s; 
}

int main(){
    int t;
    cin >> t;
    long long rta[t];
    forn(s, t){
        long long n, m, k;
        cin >> n >> m >> k;
        
        long long i = 0, j = m;
        while(j - i > 1){
            long long b = (j+i)/2;


            if(k <= n*f(b, m)) j = b;
            else i = b;
        }
        rta[s] = j;
    
    }
    forn(i, t){
        cout << rta[i] << "\n";
    }
    return 0;
}
