#include<iostream>

using namespace std;

int main(){
    double resultado;
    float nota=11.0;
    string condicion=(nota>=10.5)?"Aprobo":"Desaprobo";

    resultado=5.0+2.0/5.0+4.0*2.0-1.0*4.0;

    cout<<resultado;

    cout<<"El estudiante segun su nota: \t"<<condicion;

    return 0;
}