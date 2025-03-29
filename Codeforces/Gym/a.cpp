#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


int n, t;

int main(){
    int t;
    cin >> t;
    char c;
    int n;
    vector<string> rtas;
    forn(i, t){
        cin >> c;
        char x;
        cin >> x;
        n = x - '0'; //entero de caracter
        string s = "";
        forn(i, 8){
            if(i != n - 1) {
                s.push_back(c);
                s.push_back(i + 1 + '0');
                rtas.push_back(s);
                s = "";
            }
        }
        s = "";
        for(char y = 'a'; y < 'i'; y++){
            if(y != c){
                s.push_back(y);
                s.push_back(x);
                rtas.push_back(s);
                s = "";
            }
        }
    }
    for(auto a: rtas) cout << a << "\n";

    return 0;
}