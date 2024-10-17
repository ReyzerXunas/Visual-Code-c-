#include<iostream  >
#include<cmath>
using namespace std;

int main() {
    float l, P, A, d;
    cout<<"Ingrese el lado: ";
    cin>>l;
    A= l*l;
    P= 4*l;
    d= l*sqrt(2) ;
    cout<<"El area del cuadrado es: "<<A<<endl;
    cout<<"El perimetro es: "<<P<<endl;
    cout<<"La diagonal es: "<<d<<endl;

return 0;
}