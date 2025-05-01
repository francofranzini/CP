#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)

unsigned long long h, i, j, k;
int n;
int a[101];
int anashe(unsigned long long k){
    unsigned long long carry = 0;
    long long ultimo = a[0];
    forn(i, n){
        if(ultimo - a[i] > 0) carry -= ultimo - a[i];
        carry += k;
        ultimo = a[i] + k;
    }
    return carry>=h;
}
void solve(){
    cin >> n >> h;
    j = h+1;
    i = 0;
    forn(i,n){
        cin >> a[i];
    }
    while(j - i > 1){
        k = (i + (j - i)/2);
        if(anashe(k)) j = k;
        else i = k;
    }
    cout << j << "\n";

    
}


int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}