#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)

using ll = long long;
int primos[4] = {2,3,5,7};

int main(){
    int c, n;
    cin >> c;
    string pass;
    vector<string> rta;
    forn(i, c){
        cin >> n;
        cin >> pass;
        if(n % 2 == 0 || n < 5 || n > 32 || pass[0] < 'a' || pass[0] > 'z' || pass[n-1] < 'A' || pass[n-1] > 'Z' || (pass[n/2] != '2' && pass[n/2] != '3' && pass[n/2] != '5' && pass[n/2] != '7' ) ){
            rta.push_back("CONTRASENA NO SEGURA");
        }
        else{
            rta.push_back("CONTRASENA SEGURA");
        }
    }
    for(auto a: rta) cout << a << "\n";
    

    return 0;
}