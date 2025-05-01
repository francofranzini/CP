#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)

void solve(){
    int n;
    char c;
    cin >> n >> c;
    char s[2*n];
    forn(i, n){
        cin >> s[i];
        s[n+i] = s[i];
    }
    int count = 0, m = 0, contando = 0;
    forn(i, 2*n){
        if(s[i] == c && !contando) contando = 1;
        if(s[i] == 'g' && contando){
            m = max(m, count);
            count = 0;
            contando = 0;
        }
        if(contando){
            count++;
        }  

    }
    
    cout << m << "\n";
    
    
}


int main(){
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}