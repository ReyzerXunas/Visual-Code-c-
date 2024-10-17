#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float a, c, b, h, A, P;
    cout<<"Ingrese el lado 1: ";
    cin>>a;
    cout<<"Ingrese el lado 2: ";
    cin>>c;
    cout<<"Ingrese la base: ";
    cin>>b;
    cout<<"Ingrese la altura: ";
    cin>>h;
    A= (b*h)/2;
    P= a+b+c;
    cout<<"El area del triangulo es: "<<A<<endl;
    cout<<"El perimetro es: "<<P<<endl;

return 0;
}