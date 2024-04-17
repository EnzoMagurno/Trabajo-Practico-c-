#include <iostream>
using namespace std;

int main(){

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

    /* 
    3)
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
    else
    {
        for (int i = numero; i <= (numero * 2); i++)
        {
            cout << i << endl;
        }
    }
     */

    /*
    4)
    int numero;
    cout <<"Ingrese un numero entero"<< endl;
    cin >> numero;
    int suma=0;
    for (int i = 0; i < numero; i++){
        int numero;
        cout<<"Ingrese un numero entero:"<<endl;
        cin>>numero;
        suma+=numero;
    }
    cout<<"La suma de numeros ingresados es " << suma <<endl;
    */

    /*
    5)
    int numero;
    int suma=0;
    cout <<"Ingrese un numero entero"<< endl;
    cin >> numero;
        for (int i = 0; i < numero; i++){
        int numero;
        cout<<"Ingrese un numero entero:"<<endl;
        cin>>numero;
        while(numero>0){
        cout<<"Ingrese un numero mayor que 0:"<<endl;
        cin>>numero;
        }
        suma+=numero;
        }
    cout<<"La suma de numeros ingresados es " << suma <<endl;
    */
   
   /*
   6)
  int fib(int n){
    if(n<2) {
        return 0;
    }
    return fib(n-1)+fib(n-2);
  }
  cout<<fib(25)<<endl;
   */
   /*
   7)
  int aprobados,desaprobados,alumno,nota=0;
  cout<<"Alumno: ";
  cin>>alumno;
  while (alumno!=0){
    cout<<"Nota: ";
    cin>>nota;
    if(nota>4){
        aprobados++
    }else{
        desaprobados++
    }
    cout<<"Alumno: ";
    cin>>alumno
  }
  cout<<"Aprobados: "<<aprobados<<endl;
  cout<<"Desaprobados: "<<desaprobados<<endl;
   */  


  /*
  9)

  */
 std::queue<string> nombres;
 for (int i = 0; i <=3; i++){
    cout<<"Ingrese un nombre: "<<endl;
 }
 cout<<nombres;
  return 0;
}
