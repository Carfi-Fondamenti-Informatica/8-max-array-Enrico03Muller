#include <iostream>
//#include "lib.h"

using namespace std;

float massimo (float numeri[], int n){
    float max;
    max = numeri [0];

    for (int i = 0; i < n; i++){
        if (max < numeri [i]){
            max = numeri [i];
        }
    }
    return max;
};

int main () {
    int n = 0;
    cout << "Inserisci la dimensione dell'array: ";
    cin >> n;

    float numeri[n];
    for (int i = 0; i < n; i++) {
        cout << "Inserisci il valore " << i << " dell'array: ";
        cin >> numeri[i];
    }

    cout << massimo (numeri, n) << endl;
    return 0;
}
