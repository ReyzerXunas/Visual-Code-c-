#include <iostream>
using namespace std;

struct alum {
    string name;
    int n1, n2, n3;
    string facultad;
} p1;

int main () {
    alum p2;
    alum lista[5];

    p1.name = "";
    p1.n1 = 15;
    p1.n2 = 11;
    p1.n3 = 13;
    p1.facultad = "";

    lista[2].name = "JACK";
    lista[2].n1 = 15;
    lista[2].n2 = 11;
    lista[2].n3 = 13;
    lista[2].facultad = "FIIS";

    cout << "Nombre: " << lista[2].name << endl;
    cout << "Notas: " << lista[2].n1<< ";" << lista[2].n2 << ";" << lista[2].n3 << ";" << endl;
    cout << "Facultad: " << lista[2].facultad << endl;


    return 0;
}