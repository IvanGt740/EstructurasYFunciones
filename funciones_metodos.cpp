#include <iostream>
using namespace std;
//funcion que sume dos valores
int suma(int num1, int num2) {
    int resultado=0;
    resultado =num1+num2; 
    return resultado; 
} 

//Sobrecarga de Metodos
//Las funciones tienen el mismo nombre pero cada una recibe distinta cantidad de parametros
int suma(int num1, int num2, int num3) {
    int resultado=0;
    resultado =num1+num2+num3; 
    return resultado; 
}
//Metodo
void suma2(int &num1, int &num2) {
    int resultado=0;
    num1+=1;
    num2+=1;
    resultado =num1+num2; 
    cout << "La suma es: "<<resultado<<endl; 
}
main(){

    int a = 10, b = 20;

    cout<<suma(10,20)<<endl;
    cout<<suma(40,90)<<endl;
    cout<<suma(30,10,50)<<endl;
    cout<<suma(67,99)<<endl;
    cout<<suma(100,20,200)<<endl<<endl;

    //Metodo
    //suma2(500,500);

    suma2(a,b);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
        





}