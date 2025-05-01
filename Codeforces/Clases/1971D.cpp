#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(long int i = 0; i<n; i++)


void solve(){
    string s;
    cin >> s;
    int rta = 1;
    char ultimo = s[0];
    int flag = 0;
    //11111111111111 -> 1
    //00000000000000 -> 1
    //000000011111111 ->1
    //1000000000000001 -> 2
    //0101010101
    forn(i, s.length()){
        if(flag && s[i] == '1' && ultimo == '0')rta++;
        if(s[i] == '0' && ultimo == '1') rta++;
        if(s[i]== '1' && ultimo == '0') flag = 1;

        ultimo = s[i];
    }
    
    cout << rta << "\n";
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
 
    return 0;
}