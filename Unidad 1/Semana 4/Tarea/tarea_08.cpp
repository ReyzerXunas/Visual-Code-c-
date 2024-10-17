#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int n, elemento;

    cout << "Hola. Cuantos elementos deseas ingresar? ";
    cin >> n;

    cout << "Ingresa los elemntos del vector: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> elemento;
        numeros.push_back(elemento);
    }

    int mayor = numeros[0];
    for (int i = 0; i < n; i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
    }

    cout << "\nEl mayor elemento en el vector es: " << mayor << endl;
    return 0;
}