#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main()
{
    int correctos = 0, incorrectos = 0;
    string respuesta;
    cout << endl;
    cout << "       Hola. Bienvenido a un juego de preguntas." << endl;
    sleep(2);
    cout << "      Por favor responde las siguientes preguntas: " << endl;
    sleep(2);
    cout << endl;
    cout << "Pregunta 1:  Cual es la capital de Francia?" << endl;
    cout << "a) Madrid\nb) Berlin\nc) Paris\nd) Roma" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == "c" || respuesta == "C")
    {
        cout << "Eso es correcto!" << endl;
        correctos++;
    }
    else
    {
        cout << "Es incorrecto. La respuesta correcta es Paris." << endl;
        incorrectos++;
    }
    cout << endl;
    sleep(1);
    cout << "Pregunta 2:  Cual es lel planeta mas cerca al sol?" << endl;
    cout << "a) Venus\nb) Mercurio\nc) Tierra\nd) Marte" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == "b" || respuesta == "B")
    {
        cout << "Eso es correcto!" << endl;
        correctos++;
    }
    else
    {
        cout << "Es incorrecto. La respuesta correcta es Mercurio." << endl;
        incorrectos++;
    }
    cout << endl;
    sleep(1);
    cout << "Pregunta 3:  Cuantos continentes hay en la tierra?" << endl;
    cout << "a) 4\nb) 8\nc) 6\nd) 7" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == "d" || respuesta == "D")
    {
        cout << "Eso es correcto!" << endl;
        correctos++;
    }
    else
    {
        cout << "Es incorrecto. La respuesta correcta es 7." << endl;
        incorrectos++;
    }
    cout << endl;
    sleep(1);
    cout << "Pregunta 4:  Cuantos departamentos hay en el Peru?" << endl;
    cout << "a) 24\nb) 25\nc) 21\nd) 22" << endl;
    cout << "Tu respuesta: ";
    cin >> respuesta;
    if (respuesta == "a" || respuesta == "A")
    {
        cout << "Eso es correcto!" << endl;
        correctos++;
    }
    else
    {
        cout << "Es incorrecto. La respuesta correcta es 24." << endl;
        incorrectos++;
    }
    cout << endl;
    sleep(1);
    cout << "Jugeo terminado!!" << endl;
    cout << "Respuestas correctas: " << correctos << endl;
    cout << "Reapuestas incorrectas: " << incorrectos << endl;

    return 0;
}