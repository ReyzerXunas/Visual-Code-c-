#include<iostream>
#include<cmath>
using namespace std;

int main() {
    float B, b,h , A;
    cout<<"Ingrese su base mayor: ";
    cin>>B;
    cout<<"ingrese su base nemor: ";
    cin>>b;
    cout<<"ingrese la altura: ";
    cin>>h;
    A= ((B+b)*h)/2;
    cout<<"El area del trapecio es: "<<A<<endl;

return 0;
}