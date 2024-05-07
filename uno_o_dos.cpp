#include <iostream>
using namespace std;

int main (){
    int i,j,n,q,operacion,valor1,valor2,dos,suma[2*10^5],segunda[2*10^5];
    cin >> n >> q;
    for(i=1; i<=n; i++){
        cin >> suma[i];
    }
    for(int j = 0; j<n; j++){
        if(j == 0) TA[j] = suma[j];
        else{
            TA[j] = TA[j-1] + suma[j];
        }
    }
    suma[0]=0;
    for(i=0; i<q; i++){
        dos = 0;
        cin>> operacion >> valor1 >> valor2;
        if(operacion==1){
            suma[valor1]=valor2;
            //cout << suma[valor1];
        }
        else {
            for(j=suma[valor1]; j<=suma[valor2]; j++){
                dos += suma[j];
            }

            //cout << "\n" << dos << "\n";
        }
        segunda[i] = dos;

    }
    for(i=0; i<q; i++){
        if(segunda[i]>0) cout << segunda[i] << "\n";
    }

    cin.get();

    return 0;
}
