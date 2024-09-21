#include <iostream>
#include <string>

using namespace std;

enum Estacion {
	NINGUNA,
    PRIMAVERA,
    VERANO,
    OTONIO,
    INVIERNO,
    NUM_GENEROS 
};

string obtenerNombreEstacion(Estacion estacion) {
    switch(estacion) {
    	 case NINGUNA: return "Ninguna";
        case PRIMAVERA: return "Primavera";
        case VERANO: return "Verano";
        case OTONIO: return "Otonio";
        case INVIERNO: return "Invierno";
        default: return "Desconocido";
    }
}

int main() {
    int eleccion;

    cout << "Seleccione La Estacion Del Anio:" << endl;
    cout << "0. Ninguna" << endl;
    cout << "1. Primavera" << endl;
    cout << "2. Verano" << endl;
    cout << "3. Otonio" << endl;
    cout << "4. Invierno" << endl;

    cout << "Ingrese el numero correspondiente a la Estacion: ";
    cin >> eleccion;

    if (eleccion < 0 || eleccion >= NUM_GENEROS) {
        cout << "Opcion invalida." << endl;
    } else {
        Estacion estacionSeleccionado = static_cast<Estacion>(eleccion);
        cout << "Has seleccionado la Estacion: " << obtenerNombreEstacion(estacionSeleccionado) << endl;
    }

    return 0;
}
