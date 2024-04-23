#include <iostream>
using namespace std;


/*
??Tipo de String: CHAR
Los caracteres pueden escribirse de forma literal, encerrándolos entre comillas simples, o como número, usando el código asociado al carácter.
char letra = 'A';
char codigo = 65;

??Funciones CHAR
toupper('h') => 'H'
tolower('H') => 'h'
Si el carácter no es un una letra, no lo modifica.

??Tipo compuesto: STRING
string saludar = 'hola';
para c++ es usar un char por cada elemento de un string => 'h' 'o' 'l' 'a'

??Índice de cada carácter.
'H O L A'
 0123456

string var = 'hola'
var.length() // 4

cout<<var[var.length()-1];

string cadena = 'El grillo salta';
cadena.find(" "); // 2

*/
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
 
  return 0;
}
