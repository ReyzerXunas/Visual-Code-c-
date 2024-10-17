#include <iostream>
#include <string>
#include<cctype>

using namespace std;

// (Cifrado César)
string encriptarNombre(string nombre, int desplazamiento) {
    string nombreEncriptado = "";

    for (int i = 0; i < nombre.length(); i++) {
        char letra = nombre[i];

       
        if (isupper(letra)) {
            letra = (letra - 'A' + desplazamiento) % 26 + 'A';
        }
       
        else if (islower(letra)) {
            letra = (letra - 'a' + desplazamiento) % 26 + 'a';
        }

        
        nombreEncriptado += letra;
    }

    return nombreEncriptado;
}

int main() {
    string nombre;
    int desplazamiento;

   
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);

   
    cout << "Introduce el desplazamiento para encriptarlo a las siguientes letras: ";
    cin >> desplazamiento;

    
    string nombreEncriptado = encriptarNombre(nombre, desplazamiento);

    cout << "Tu nombre encriptado es: " << nombreEncriptado << endl;

    return 0;
}
