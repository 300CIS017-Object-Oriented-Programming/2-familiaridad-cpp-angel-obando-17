#include "matematicas.h"

int sumar( int num1, int num2 ) {
    return num1 + num2;
}

int restar( int num1, int num2 ) {
    if( num1 >= num2 ) {
        return num1 - num2;
    } else {
        return num2 - num1;
    }
}

int factorial( int n ) {
    int i = 1, ans = 1;
    while( i <= n ) {
        ans *= i;
        i = i + 1;
    }
    return ans;
}

int potencia( int base, int exponente ) {
    if( base == 0 ) {
        return 1;
    }
    int i, ans = 1;
    for( i = 0; i < exponente; i++ ) {
            ans *= base;
    }
    return ans;
}

int llenarArreglo( int arreglo[ ], int tamano ) {
    for( int i = 0; i < tamano; i++ ) {
        arreglo[ i ] = i + 1;
    }
    return 0;
}

int sumarPares( int arreglo[ ], int tamano ) {
    int suma = 0;
    for( int i = 0; i < tamano; i += 2 ) {
        suma += arreglo[ i ];
    }
    return suma;
}

using std::cout;

void mostrarArreglo( int arreglo[ ], int tamano ) {
    for( int i = 0; i < tamano; i++ ) {
        cout << arreglo[ i ] << " ";
    }
}

int encontrarMax( int arreglo[ ], int tamano ) {
    int max_number = 0;
    for( int i = 0; i < tamano; i++ ) {
        if( max_number < arreglo[ i ] ) {
            max_number = arreglo[ i ];
        }
    }
    return max_number;
}

