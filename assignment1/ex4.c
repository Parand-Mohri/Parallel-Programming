#include <stdio.h>

//
// Created by Parand on 18/11/2022.
//
void dA(int n, int m);
int b(int n, int m);

const int L = 4;

int main(){
    for (int n = 0; n <= L; ++n){
        dA(n, L);
    }
}

void dA(int n, int m){
    for (int k = m - n; k >= 1; --k){
        printf(" ");
    }
    for (int k = 0; k <= n; ++k){
        printf("%i ", b(n, k));
    }
    printf("\n");
}

int b(int n, int k){
    int e = 1;
    for (int i = 1; i <=k; i++){
        e = (e * (n - i + 1)) / i;
    }
    return e;
}