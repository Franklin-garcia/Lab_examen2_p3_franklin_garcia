#include <iostream>
#include <fstream>
#include <string>
#include "Stack.h"
#include "ArrayStack.h"

void crear_archivo(string texto);
using namespace std;


int main(){
  bool seguir=true;
  int opcion;
  while(seguir){
    cout<<"Ingrese opcion"<<endl<<"1-Crear archivo"<<endl<<"2-Modificar un archivo"<<endl<<"3-salir";
    cin>>opcion;
    switch (opcion) {
      case 1:{
        cout<<"Ingrese contenido"<<endl;
        string contenido;
        cin>>contenido;
        crear_archivo(contenido);
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
        cout<<"Ingrese nombre del archivo con ruta"<<endl;
        string ruta;
        cin>>ruta;
        ofstream archivo;
        archivo.open(ruta,ios::out);//Abriendo o creando el archivo
        if(archivo.fail()){
                cout<<"Hubo un error";
        }
        archivo<<texto;
        archivo.close();
}
