#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i<n; i++)



int main(){
    int n;
    cin >> n;
    int arr[1000000];
    forn(i, 1000000) arr[i] = -1; 
    forn(i, n){
        cin >> arr[i];
    }
    int q;
    cin >> q;
    int nq, vq;
    vector<int> rta;
    forn(i, q){
        cin >> nq >> vq;
        if(vq > 1000000){
            nq = -1;
            vq = -1;
        }
        while(nq > 0){
            if(arr[vq] != -1){
                vq = arr[vq];
                --nq;
            }
            else{
                nq = -1;
                vq=-1;
            }
        }
        rta.push_back(vq);
    }
    for(auto a: rta){
        if(a != -1) cout << a << "\n";
        else cout << "Mi primera fuga de memoria" << "\n";
    }
    return 0;
}