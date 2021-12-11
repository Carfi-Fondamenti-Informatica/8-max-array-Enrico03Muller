//
// Created by Enrico Muller on 11/12/2021.
//

#include "lib.h"

int massimo (float numeri[], int n){
    float max;
    max = numeri [0];

    for (int i = 0; i < n; i++){
        if (max < numeri [i]){
            max = numeri [i];
        }
    }
    return max;
}
