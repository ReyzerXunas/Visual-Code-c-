#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, p, S;
    cout<<"Ingrese el pimer lado: ";
    cin>>a;
    cout<<"Ingrese el segundo lado: ";
    cin>>b;
    cout<<"Ingrese el tercer lado: ";
    cin>>c;
    p= (a+b+c)/2;
    S= sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"El semi perimetro del triangulo, segun la formula de Heron, es: "<<p<<endl;
    cout<<"El area es: "<<S<<endl;

return 0;
}