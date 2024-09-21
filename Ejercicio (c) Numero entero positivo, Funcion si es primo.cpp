#include <iostream>

bool esPrimo(int numero);

int main() {
    int numero;
    std::cout << "Escribe un número entero positivo: ";
    std::cin >> numero;

    if (numero <= 0) {
        std::cout << "Por favor, ingresa un número entero positivo." << std::endl;
    } else {
        if (esPrimo(numero)) {
            std::cout << "El número " << numero << " es primo." << std::endl;
        } else {
            std::cout << "El número " << numero << " no es primo." << std::endl;
        }
    }

    return 0;
}

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) return false;
    }
    return true; 
}

