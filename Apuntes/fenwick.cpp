#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)
 
int n;
unordered_map <long long, long long> FT;
 
void setFT(int c, long long v){
    c++;
    
    for(int i = c; i<=n; i += i & -i){
        FT[i] += v;
    }
}

 
long long getFT(int c){
    c++;
    long long v = 0;
    for(int i = c; i; i -= i & -i){
        v += FT[i];
    }
    return v;
}
 
int main(){
    
    long q;
    cin >> n >> q;
 
    long long A[n];
    forn(i, n){
        cin >> A[i];
        setFT(i, A[i]);
    }
    
    
    long long rta[q]; 
    long s = 0;
    
    forn(i, q){
        int modo, a;
        long long b;
        cin >> modo >> a >> b;
        if(modo == 1){
            long long dif = b - A[a-1];
            A[a-1] = b;
            setFT(a-1, dif);
        }
        else{
            rta[s] = getFT(b-1) - getFT(a-2);
            s++;
        }
    }
    forn(i, s){
        cout << rta[i] << "\n";
    }
 
    return 0;
}