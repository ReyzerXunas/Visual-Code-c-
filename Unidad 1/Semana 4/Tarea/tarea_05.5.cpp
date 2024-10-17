#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string encriptartexto(string texto, int desplazamiento) {
    string textoEncriptado = "";

    // Usar std::string::size_type para evitar advertencias
    for (string::size_type i = 0; i < texto.length(); i++) {
        char letra = texto[i];

        // Si es una letra mayúscula
        if (isupper(letra)) {
            letra = (letra - 'A' + desplazamiento) % 26 + 'A';
        }
        // Si es una letra minúscula
        else if (islower(letra)) {
            letra = (letra - 'a' + desplazamiento) % 26 + 'a';
        }

        // Agregar la letra encriptada
        textoEncriptado += letra;
    }

    return textoEncriptado;
}

int main() {
    string texto;
    int desplazamiento;

    cout << "Introduce un texto para cifrar: ";
    getline(cin, texto);

    cout << "Introduce el desplazamiento para encriptarlo a las siguintes letras: ";
    cin >> desplazamiento;

    string textoEncriptado = encriptartexto(texto, desplazamiento);

    cout << "El texto encriptado por "<< desplazamiento << " letras es: " << textoEncriptado << endl;

    return 0;
}