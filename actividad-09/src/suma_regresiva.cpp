#include "suma_regresiva.hpp"

long long sumaIterativa(unsigned int n) {
    long long suma=0; 
    for(unsigned int i=n; i>0; i--){
        suma = suma+i;
    }
    return suma;
}

long long sumaRecursiva(unsigned int n) {
    if(n==0){
    return 0;
    }
    return n + sumaRecursiva(n-1);       
}
