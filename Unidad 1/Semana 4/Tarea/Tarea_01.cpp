#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros(10);
    int suma = 0;
    double promedio;
    cout << "Ingrese los 10 numeros enteros: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = suma / 10.0;
    cout << "El promedio de estos numeros es: " << promedio << endl;

    int contador_mayor = 0;
    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] > promedio)
        {
            contador_mayor++;
        }
        else
        {
            continue;
        }
    }

    cout << "La cantidad de numeros mayores al promedio son de " << contador_mayor << " numeros." << endl;

    return 0;
}
