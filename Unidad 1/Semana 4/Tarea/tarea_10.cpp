#include <iostream>
#include <string>

using namespace std;

int main()
{
    string oracion;
    int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0;

    cout << "Ingrese una oracion: ";
    getline(cin, oracion);

    for (char c : oracion)
    {
        c = towlower(c);

        switch (c)
        {
        case 'a':
            contador_a++;
            break;
        case 'e':
            contador_e++;
            break;
        case 'i':
            contador_i++;
            break;
        case 'o':
            contador_o++;
            break;
        case 'u':
            contador_u++;
            break;
        default:
            continue;
        }
    }

    cout << "\nCantidad de vocales en la oracion " << oracion << ": " << endl;
    cout << "a: " << contador_a << endl;
    cout << "e: " << contador_e << endl;
    cout << "i: " << contador_i << endl;
    cout << "o: " << contador_o << endl;
    cout << "u: " << contador_u << endl;

    return 0;
}