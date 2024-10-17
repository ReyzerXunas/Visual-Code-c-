#include <iostream>

using namespace std;

int main(void)
{

    bool band = true;
    int num;
    do
    {
        cout << "Ingrese un numero o presione 0 para salir: ";
        cin >> num;
        switch (num)
        {
        case 1:
            cout << "Este es el 1" << endl;
            break;
        case 2:
            cout << "Este es el numero 2" << endl;
            break;
        case 3:
            cout << "Este es el numero 3" << endl;
            break;
        case 4:
            cout << "Este es el numero 4" << endl;
            break;
        case 0:
            band = false;
            break;
        default:
            cout << "Numero no encontrado" << endl;
            break;
        }

        return 0;
    } while (band);
    cout << "Hasta pronto";
}