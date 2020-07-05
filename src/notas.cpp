#include<iostream>
#include<locale.h>
#include<string>
#include<math.h>                   //libreria matematica
using namespace std;

int main()
{
    setlocale(LC_ALL,"Spanish");

    int nu, raiz=0, potencia=0;

    cout<<"ingrese un numero: "<<endl;
    cin>>nu;

    raiz=sqrt(nu);                       //calcular raiz
    potencia=pow(nu,2);                  //calcular potencia

    cout<<"la raiz cuadrada es: "<<raiz<<endl;
    cout<<"la potencia del numero es: "<<potencia<<endl;
    cout<<"la potencia del numero es: "<<potencia<<endl;

    return 0;