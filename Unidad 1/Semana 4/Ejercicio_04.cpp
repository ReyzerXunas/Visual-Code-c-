#include<iostream>
using namespace std;

struct dog
{
   string name;
   int year;
   string color;
   string raza; 
}p1;

int main(void){
    dog p2;
    dog lista[10];
    p1.name="Duqueza";
    p1.year=7;
    p1.color="Marron";
    p1.raza="Criollo";
    //
    lista[2].name="";
    lista[2].year=8;
    lista[2].raza="";
    lista[2].color="";
}