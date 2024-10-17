#include<iostream>
#include <cmath>
using namespace std;

int main() {
    float B, H,A , P,d;
    cout<<"Ingrese la base: ";
    cin>>B;
    cout<<"ingrese la altura: ";
    cin>>H;
    A= B*H;
    P= 2*(B+H);
    d= sqrt(B*B + H*H);
    cout<<"El area del rectangulo es: "<<A<<endl;
    cout<<"El perimetro es: "<<P<<endl;
    cout<<"La diagonal es: "<<d<<endl;

return 0;
}