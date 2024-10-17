#include <iostream>
#include <string>
using namespace std;

int main()
{
    string texto;
    int clave;
    // cadena de texto
    cout << "Ingresa cualquier palabra para cifrar o desplazar: ";
    getline(cin, texto);
    // clave de desplazamiento o de cifrado
    cout << "Ingrese un numero entero para el desplazamiento: ";
    cin >> clave;

    for (size_t i = 0; i < texto.length(); i++)
    {
        char c = texto[i];

        if (c >= 'A' && c <= 'Z')
        {
            c = (c - 'A' + clave) % 26 + 'A';
        }

        else if (c >= 'a' && c <= 'z')
        {
            c = (c - 'a' + clave) % 26 + 'a';
        }

        texto[i] = c;
    }

    cout << "El texto en cadena cifrada por " << clave << " letras es: " << texto << endl;

    return 0;
}