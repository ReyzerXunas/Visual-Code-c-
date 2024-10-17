#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    vector<int> sin_duplicados;
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

    for (string::size_type i = 0; i < numeros.size(); i++)
    {
        bool es_duplicado = false;

        for (string::size_type j = 0; j < sin_duplicados.size(); j++)
        {
            if (numeros[i] == sin_duplicados[j])
            {
                es_duplicado = true;
                break;
            }
        }

        if (!es_duplicado)
        {
            sin_duplicados.push_back(numeros[i]);
        }
        else
        {
            continue;
        }
    }

    cout << "\nVector sin duplicados:" << endl;
    for (string::size_type i = 0; i < sin_duplicados.size(); i++)
    {
        cout << sin_duplicados[i] << " ";
    }

    cout << endl;

    return 0;
}