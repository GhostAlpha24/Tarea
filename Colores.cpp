#include <iostream>
#include <unordered_map>
#include <string>

std::string obtenerColor(char letra) {
    std::unordered_map<char, std::string> colores = {
        {'R', "Rojo"},
        {'Y', "Amarillo"},
        {'B', "Azul"},
        {'W', "Blanco"},
        {'K', "Negro"},
        {'C', "Cian"},
        {'G', "Verde"}
    };

    auto it = colores.find(letra);
    if (it != colores.end()) {
        return it->second;
    } else {
        return "Color no válido";
    }
}

int main() {
    char letra;
    std::cout << "Ingrese una letra para obtener el color correspondiente: ";
    std::cin >> letra;

    std::string color = obtenerColor(toupper(letra));
    std::cout << "El color correspondiente a la letra '" << letra << "' es: " << color << std::endl;

    return 0;
}
