#include <iostream>
using namespace std;

int main(void){
int x;
x=10;
//puntero: int *p; --> float *r; ---> char *q;
int *p;
p=&x;
//int a[5];
cout<<"Valor: "<<x<<endl;
cout<<"Direccion: "<<&x<<endl;
cout<<"Donde apunta p: "<<p<<endl;
cout<<"Valor de destino P: "<<*p<<endl;;
*p=20;
cout<<"Valor: "<<x<<endl;
}
