#include<iostream>
using namespace std;

struct alumno
{
   string name;
   string notas;//no usar string, cambiar
   string facultad; 
}a1;

int main(void){
    alumno a2;
    alumno lista[5];
    a1.name="Daniel";
    a1.notas= "14  15  18";
    a1.facultad="Contabilidad";
    //
    lista[2].name="Alfonso";
    lista[2].notas="14  16  17";
    lista[2].facultad="Sistemas";

    lista[3].name="Maria";
    lista[3].notas=" 14  19  12";
    lista[3].facultad= "Agronomia";

    cout<<lista[2].name<<endl;
    cout<<lista[2].notas<<endl;
    cout<<lista[2].facultad<<endl;
    
   } 
   