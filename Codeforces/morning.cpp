#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)
vector<int> rta;
int A[1000000];
void solve(){
    string pass;
    cin >> pass;
    forn(i, pass.size()){
        A[i] = pass[i] - '0';
    }
    int ax = 4;
    int a = 0;
    for(int i = 0; i<pass.size(); i++){
        if(A[i] == 0) {
            ax+= abs(9 - a);
            a = 9;
        }
        else{
            ax += abs(A[i]- 1 - a);
            a = A[i] - 1;
        }
    }
    rta.push_back(ax);
}   

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    for(auto a: rta) cout << a << "\n";
    return 0;
}