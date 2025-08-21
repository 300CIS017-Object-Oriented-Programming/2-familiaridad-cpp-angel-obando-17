// main.cpp
#include <iostream>
#include "matematicas.h"

void probarMatematicas( ) {
    std::cout << "Bienvenido a Calculadora Simple" << std::endl;
    std::cout << "Ingresa el primer numero ( Para la potencia sera la base )" << std::endl;
    int num1;
    std::cin >> num1;
    std::cin.clear( );
    std::cin.ignore( 10000, '\n' );
    int num2;
    std::cout << "Ingresa el segundo numero ( Para la potencia sera el exponente )" << std::endl;
    std::cin >> num2;
    std::cin.clear( );
    std::cin.ignore( 10000, '\n' );

    int resultado_suma = sumar( num1, num2 );
    int resultado_resta = restar( num1, num2 );
    int resultado_potencia = potencia( num1, num2 );

    int n;
    std::cout << "Ingrese el numero que desea calcular el factorial" << std::endl;
    std::cin >> n;
    std::cin.clear( );
    std::cin.ignore( 10000, '\n' );

    int resultado_factorial = factorial( n );

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    std::cout << "Potencia: " << resultado_potencia << std::endl;
    std::cout << "Factorial: " << resultado_factorial << std::endl;
}

void probarArreglos( ) {
    int cantElementos = 10;
    int arreglo[ cantElementos ];
    llenarArreglo( arreglo, cantElementos );
    std::cout << "Arreglo lleno: ";
    mostrarArreglo( arreglo, cantElementos );
    std::cout << " Sumando pares" << std::endl;
    int suma = sumarPares( arreglo, cantElementos );
    std::cout << "Suma de elementos en posiciones pares: " << suma << std::endl;
    int maximo = encontrarMax( arreglo, cantElementos );
    std::cout << "Maximo elemento encontrado: " << maximo << std::endl;
}

int main( ) {
    int opcion, resultado, num1, num2, n;
    do {
        std::cout << " Menú de selección " << std::endl;
        std::cout << "1 - Suma" << std::endl;
        std::cout << "2 - Resta" << std::endl;
        std::cout << "3 - Potencia" << std::endl;
        std::cout << "4 - Factorial" << std::endl;
        std::cout << "0 - Salir" << std::endl;
        std::cout << "Seleccione una opción" << std::endl;
        std::cin >> opcion;

        switch( opcion ) {
            case 1:
                std::cout << "Elegiste Suma!" << std::endl;
                std::cout << "Ingresa el primer número" << std::endl;
                std::cin >> num1;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                std::cout << "Ingresa el segundo número" << std::endl;
                std::cin >> num2;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                resultado = sumar( num1, num2 );
                std::cout << "El resultado es: " << resultado << std::endl;
                break;
            case 2:
                std::cout << "Elegiste resta!" << std::endl;
                std::cout << "Ingresa el primer numero" << std::endl;
                std::cin >> num1;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                std::cout << "Ingresa el segundo numero" << std::endl;
                std::cin >> num2;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                resultado = restar( num1, num2 );
                std::cout << "El resultado es: " << resultado << std::endl;
                break;
            case 3:
                std::cout << "Elegiste Potencia!" << std::endl;
                std::cout << "Ingresa la base" << std::endl;
                std::cin >> num1;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                std::cout << "Ingresa el exponente" << std::endl;
                std::cin >> num2;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                resultado = potencia( num1, num2 );
                std::cout << "El resultado es: " << resultado << std::endl;
                break;
            case 4:
                std::cout << "Elegiste Factorial!" << std::endl;
                std::cout << "Ingresa un número" << std::endl;
                std::cin >> n;
                std::cin.clear( );
                std::cin.ignore( 10000, '\n' );
                resultado = factorial( n );
                std::cout << "El resultado es: " << resultado << std::endl;
                break;
            case 0:
                std::cout << "Saliendo del programa..." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida" << std::endl;
        }
    } while( opcion != 0 );
    probarMatematicas( );
    probarArreglos( );
    return 0;
}
