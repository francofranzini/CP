#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)


int n, t;

int main(){
    int t;
    cin >> t;
    vector<int> rtas;
    forn(i, t){
        int n;
        cin >> n;
        int arr[n];
        int minim = 9;
        int prod = 1;
        int uno = 1;
        forn(j,n){
            cin >> arr[n];
            minim = min(minim, arr[n]);
            if(arr[n] == 0 && uno){
                uno = 0;
                continue;
            } 
            prod*= arr[n];
        }
        if(minim == 0){
            rtas.push_back(prod);
        }
        if(minim != 0){
            prod /= minim;
            prod *= minim+1;
            rtas.push_back(prod);
        }

    }
    for(auto a: rtas) cout << a << "\n";


    return 0;
}