#include "suma_regresiva.hpp"

long long sumaIterativa(unsigned int n) {
    long long suma=0; 
    for(unsigned int i=0; i>0; i--){
        suma = suma+i;
    }
    return 0;
}

long long sumaRecursiva(unsigned int n) {
    if(n==0)
    return 0;
return n + sumaRecursiva;       
}
