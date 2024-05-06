#include <iostream>
using namespace std;

string obtenerColor(char letra) {
    switch (letra) {
        case 'R':
            return "Rojo";
        case 'Y':
            return "Amarillo";
        case 'B':
            return "Azul";
        case 'W':
            return "Blanco";
        case 'K':
            return "Negro";
        case 'C':
            return "Cian";
        case 'G':
            return "Verde";
        default:
            return "Color no válido";
    }
}

int main() {
    char letra;
    cout << "Ingrese una letra para obtener el color correspondiente: ";
    cin >> letra;

    string color = obtenerColor(toupper(letra));
    cout << "El color correspondiente a la letra '" << letra << "' es: " << color << endl;

    return 0;
}
