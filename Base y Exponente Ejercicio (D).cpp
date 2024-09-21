#include <iostream>
#include <cmath>

double calcularPotencia(int base, int exponente);

int main() {
    int base, exponente;
    std::cout << "Escribe la base: ";
    std::cin >> base;
    std::cout << "Escribe el exponente: ";
    std::cin >> exponente;

    double resultado = calcularPotencia(base, exponente);
    std::cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << std::endl;
    return 0;
}

double calcularPotencia(int base, int exponente) {
    return pow(base, exponente); 
}

