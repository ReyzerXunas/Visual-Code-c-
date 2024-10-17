#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
#define N 5

void mostrar_vector(int v[])
{
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << "\t";
    }
    cout << endl;
}

void ordenar(int v[]){
int temp;
   

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            if (v[i] > v[j])
            {
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }


}

void llenar(int v[]){



}

int main()
{

    int v[4] = {3, 5, 2, 6};
     mostrar_vector(v);
     ordenar(v);
    mostrar_vector(v);
}