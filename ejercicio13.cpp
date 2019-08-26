#include <iostream>
using namespace std;
float base;
float altura;

double area(float base, float altura)
{
    return (base * altura)/2;
}

int main() {

    cout<<"Ingrese la base del triangulo: ";
    cin>> base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>> altura;
    cout<<"El area del triangulo es: "<<area(base, altura)<<"\n";
    return 0;
}
