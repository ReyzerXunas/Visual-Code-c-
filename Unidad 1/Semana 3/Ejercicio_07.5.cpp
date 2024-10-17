#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encriptarNombre(string nombre, int desplazamiento) {
    string nombreEncriptado = "";

    // Usar std::string::size_type para evitar advertencias
    for (std::string::size_type i = 0; i < nombre.length(); i++) {
        char letra = nombre[i];

        // Si es una letra mayúscula
        if (isupper(letra)) {
            letra = (letra - 'A' + desplazamiento) % 26 + 'A';
        }
        // Si es una letra minúscula
        else if (islower(letra)) {
            letra = (letra - 'a' + desplazamiento) % 26 + 'a';
        }

        // Agregar la letra encriptada
        nombreEncriptado += letra;
    }

    return nombreEncriptado;
}

int main() {
    string nombre;
    int desplazamiento;

    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

    cout << "Introduce el desplazamiento para encriptarlo a las siguintes letras: ";
    cin >> desplazamiento;

    string nombreEncriptado = encriptarNombre(nombre, desplazamiento);

    cout << "Tu nombre encriptado por "<< desplazamiento << " letras es: " << nombreEncriptado << endl;

    return 0;
}
