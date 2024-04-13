#include <iostream>
#include <istream>
using namespace std;
/*
struct Estudiante{
    int codigo[4];
    string nombre[4];
    int nota[4];
};

main(){
    Estudiante estudiante;
    for (int i=0;i<4;i++){
        cout<<"_______________"<<endl;
    cout<<"Ingrese Codigo:";
    cin>>estudiante.codigo[i];
    cin.ignore();
    cout<<"Ingrese nombre completo: ";
    getline(cin,estudiante.nombre[i]);
    cout<<"Ingrese Nota: ";
    cin>>estudiante.nota[i];

    }
    for (int i=0;i<4;i++){
        cout<<"_______________"<<endl;
    cout<<"Codigo: "<<estudiante.codigo[i]<<endl;
    cout<<"Nombre Completo: "<<estudiante.nombre[i]<<endl;
    cout<<"Nota: "<<estudiante.nota[i]<<endl;
    
    }    
}
*/
struct Estudiante{
    int *codigo;
    string *nombre;
    int **notas;
};

main(){
    Estudiante estudiante;
    int fila = 0, columna = 0;
    cout <<"Cuantos Estudiantes desea Agregar: ";
    cin>>fila;

    cout<<"Cuantas notas por Estudiante desea Agregar: ";
    cin>>columna;
    
    estudiante.codigo = new int[fila];
    estudiante.nombre = new string[fila];
    estudiante.notas = new int*[fila];
    for (int i=0;i<fila;i++){
        estudiante.notas[i] = new int [columna];
        
    }
    cout<<"___________________________Ingreso de Notas___________________________"<<endl;
    for (int i=0;i<fila;i++){
        cout<<"Codigo [ "<<i<<"]:";
        cin>>estudiante.codigo[i];
        cin.ignore();
        cout<<"Nombre Completo["<<i<<"]: ";
        getline(cin,estudiante.nombre[i]);

        for (int ii=0;ii<columna;ii++){
            cout<<"Ingrese Nota["<<ii<<"] :";
            cin>>*(*(estudiante.notas+i)+ii);            
        }
        cout<<"____________________________________"<<endl;

    }
    cout<<"___________________________Mostrar Notas___________________________"<<endl;
    for (int i=0;i<fila;i++){
        cout<<"Codigo [ "<<i<<"]:"<<estudiante.codigo[i]<<endl;
        cout<<"Nombre Completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;
        for (int ii=0;ii<columna;ii++){
            cout<<"Ingrese Nota["<<ii<<"] :"<<*(*(estudiante.notas+i)+ii)<<endl;
                   
        }
        cout<<"____________________________________"<<endl;

    }
    for (int i=0;i<fila;i++){
        delete[] estudiante.notas[i];
    }
    delete [] estudiante.codigo;
    delete [] estudiante.nombre;
    delete [] estudiante.notas; 
    return 0;

}