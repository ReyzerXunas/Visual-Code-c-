#include <iostream>
#include <unistd.h>
#include <vector>

using namespace std;

int main()
{
    int inicio, fin;
    cout << endl;
    cout << "Hola, vamos a generar numeros primos segun los numeros que usted ingrese." << endl;
    do
    {
        cout << endl;
        cout << "Ingrese el numero de inicio: ";
        cin >> inicio;
        cout << "Ingrese el numero del final: ";
        cin >> fin;
        if (inicio > fin)
        {
            cout << endl;
            cout << "Por favor, ingrese el valor de inicio menor que el final." << endl;
            sleep(2);
            cout << "Intente nuevamente." << endl;
            sleep(2);
        }

    } while (inicio > fin);

    vector<int> primos;

    for (int num = inicio; num <= fin; num++)
    {
        if (num < 2)
        {
            continue;
        }

        bool es_primo = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                es_primo = false;
                break;
            }
        }

        if (es_primo)
        {
            primos.push_back(num);
        }
    }

    cout << "\nNumeros primos en el rango [" << inicio << ", " << fin << "]:" << endl;
    for (int primo : primos)
    {
        cout << primo << " ";
    }
    cout << endl;
    return 0;
}