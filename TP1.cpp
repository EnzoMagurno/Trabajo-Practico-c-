#include <iostream>
using namespace std;
int main()
{

    /* 1)
    int numero;
    cout<<"Ingrese un numero:"<<endl;
    cin>>numero;
    if(numero%2==0){
        cout<<"El numero es par"<<endl;
    }else{
        cout<<"El numero es impar"<<endl;
    }
    */

    /* 2)
    string diaUsuario;
    int cantidadDeProductos;
    cout<<"¿Que dia de la semana compro?"<<endl;
    cin>>diaUsuario;
    cout<<"¿Cuantos artículos compro?"<<endl;
    cin>>cantidadDeProductos;
    if(diaUsuario=="Lunes"&&cantidadDeProductos>=3){
     cout<<"Accede al descuento!"<<endl;
    }else if(cantidadDeProductos<3){
     cout<<"Debe comprar mas articulos";
    }
    */

    /* 3)
     */
    int numero;
    cout << "Ingrese un numero entero" << endl;
    cin >> numero;
    if (numero % 2 == 1)
    {

        for (int i = numero; i < (numero * 2); i++)
        {
            cout << i << endl;
        };
    }
    return 0;
}
