#include <iostream>

using namespace std;

int main()
{

    int n;
    do
    {
        cout << "Ingrese un numero entero positivo: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "El numero debe ser uno entero positivo. Intente nuevamente." << endl;
            cout << endl;
        }
    } while (n <= 0);

    cout << "Secuencia de Collatz: " << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3 * n + 1;
        }
        cout << n << " ";

        if (n == 1)
        {
            break;
        }
    }

    cout << endl;

    return 0;
}