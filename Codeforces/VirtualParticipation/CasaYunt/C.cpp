#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

void solve(){
    string s, s_rta;
    cin >> s;
    int yes = 0, i=0;
    int n = s.size();
    int x = 0;
    if(n % 2 == 1){
       i = 0;
       x = 0;
    }
    else{
        i = 0;
        x = -1;
    }
    while(i < n/2){
        string s_izq, s_der;
        s_izq = s.substr(0,n/2 + 1 + i);
        s_der = s.substr(n/2 + x - i , n-1);
        if(s_izq == s_der){
            yes = 1;
            s_rta = s_izq; //(= s_der)
            break;
        } 
        i++;
    }
    if(yes){
        cout << "YES" << endl;
        cout << s_rta << endl;
    }
    else cout << "NO" << endl;

}

int main(){
    int t = 1;
    while(t--) solve();
    return 0;
}