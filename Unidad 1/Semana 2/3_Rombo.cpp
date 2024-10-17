#include<iostream>
#include <cmath>
using namespace std;

int main() {
    float D, d, A, L, P;
    cout<<"Ingrese la diagonal mayor: ";
    cin>>D;
    cout<<"ingrese la diagonal nenor: ";
    cin>>d;
    A= (D*d)/2;
    L= sqrt((D/2)*(D/2)+ (d/2)*(d/2));
    P= 4*L;
    cout<<"El area del rombo es: "<<A<<endl;
    cout<<"El lado es: "<<L<<endl;
    cout<<"El perimetro es: "<<P<<endl;

return 0;
}