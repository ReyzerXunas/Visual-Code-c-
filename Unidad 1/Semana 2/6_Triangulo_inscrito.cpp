#include<iostream>
#include<cmath>
using namespace std;

int main(){
    float a, b, c, R, S;
    cout<<"Ingrese el pimer lado: ";
    cin>>a;
    cout<<"Ingrese el segundo lado: ";
    cin>>b;
    cout<<"Ingrese el tercer lado: ";
    cin>>c;
    cout<<"Ingrese el radio: ";
    cin>>R;
    S= (a*b*c)/(4*R);
    cout<<"El area del triangulo inscrito es: "<<S<<endl;

return 0;
}