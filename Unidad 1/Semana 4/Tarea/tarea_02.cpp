#include <iostream>
#include <string>

using namespace std;

int main()
{

    string palabra;
    bool es_palindromo = true;

    cout << "Ingrese una palabra: ";
    cin >> palabra;
    int longitud = palabra.length();

    for (int i = 0; i < longitud / 2; i++)
    {
        if (palabra[i] != palabra[longitud - i - 1])
        {
            es_palindromo = false;
            break;
        }
    }

    if (es_palindromo)
    {
        cout << "La palabra " << palabra << " si es un palindromo." << endl;
    }
    else
    {
        cout << "La palabra " << palabra << " no es un palindromo." << endl;
    }

    return 0;
}