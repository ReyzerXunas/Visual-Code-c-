#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, r, p, S;
    cout<<"Ingrese el pimer lado: ";
    cin>>a;
    cout<<"Ingrese el segundo lado: ";
    cin>>b;
    cout<<"Ingrese el tercer lado: ";
    cin>>c;
    cout<<"Ingrese el radio: ";
    cin>>r;
    p= (a+b+c)/2;
    S= r*p;
    cout<<"El semi perimetro del triangulo circunscrito es: "<<p<<endl;
    cout<<"El area es: "<<S<<endl;

return 0;
}