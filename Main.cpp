#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "ArrayStack.h"

void crear_archivo(string);
using namespace std;


int main(){
  bool seguir=true;
  int opcion;
  while(seguir){
    cout<<"Ingrese opcion"<<endl<<"1-Crear archivo"<<endl<<"2-Modificar un archivo"<<endl<<"3-salir"<<endl;
    cin>>opcion;
    switch (opcion) {
      case 1:{
        cout<<"Ingrese el contenido del archivo"<<endl;
        string contenido;
        cin>>contenido;
        crear_archivo(contenido);
        cout<<"Hecho"<<endl;
      }break;
      case 2:{
        

      }break;
      case 3:{
        seguir=false;
      }break;

    }


  }
return 0;
}

void crear_archivo(string texto){//escribir texto
        cout<<"Ingrese nombre y ruta del archivo"<<endl;
        string ruta;
        cin>>ruta;
        cin>>ruta;
        ruta+=".txt";
        ofstream archivo;
        archivo.open(ruta.c_str(),ios::out);//Abriendo o creando el archivo
        if(archivo.fail()){
                cout<<"Hubo un error";
        }
        archivo<<texto;
        archivo.close();
}

void lectura_archivo(){
        ifstream archivo;//leer el archivo
        string texto;
        cout<<"Ingrese el nombre y ruta del archivo"<<endl;
        string ruta;
        cin>>ruta;
        archivo.open(ruta.c_str(),ios::in);
        if(archivo.fail()){
                cout<<"Hubo un error";
        }
        while(!archivo.eof()){//mientras no sea el final del archivo
                getline(archivo,texto);
                cout<<"Mi nombre es"<<texto<<endl;
        }
        archivo.close();
}
