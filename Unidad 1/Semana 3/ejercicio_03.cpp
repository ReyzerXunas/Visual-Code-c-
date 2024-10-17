//Operaciones ternarias
#include<iostream>

using namespace std;

int main(){

    float descuento;
    float monto=140;
    string condicion1=(monto>=100)?"Tienes un decuento del 10%":"No tienes descuento";
    float condicion2=(monto>=100)?descuento=monto-(monto*0.1):descuento=monto;


    cout<<"Del precio a pagar: \t"<<condicion1<<endl;
    cout<<"Total a pagar: "<<condicion2<<" soles"<<endl;

    return 0;
}