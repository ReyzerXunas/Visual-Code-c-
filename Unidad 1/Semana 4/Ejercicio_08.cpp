#include <iostream>
#include <ctime>
using namespace std;

int Aleatorio( int max, int min){
int num;
//srand(time(NULL));
num = rand() % (max - min) + min;
return num;
}
int main()
{
    while (105)
    {
        cout<<Aleatorio(0,1);
    }
    


}