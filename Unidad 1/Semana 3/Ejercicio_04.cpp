#include<iostream>

using namespace std;

int main(){
int a=10;
int b=10;
{
    int b=10;
    {
        int c;
    }
}
cout<<a;
    return 0;
}