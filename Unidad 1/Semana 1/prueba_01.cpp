//NOTA: NO ES PARTE DE CLASES, FUE PRUEBA DE MI MISMO :)
#include <iostream>
#include <unistd.h>
using namespace std;

int main(){
int numero;
int suma = 0;

cout << "Introduce un numero para sumar: ";
cin >> numero;
cout << endl;

for (int i = 0; i<10; i++)
{
  suma += numero;  
}

cout << "Cargando.";
sleep(1);
cout <<".";
sleep(1);
cout << ".";
sleep(1);
cout << endl;
sleep(1);

cout << "La suma del numero " << numero << " 10 veces es " << suma << endl;

return 0;
}
//int load(){}