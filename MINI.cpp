
//Desarrollar un sistema de registro de stock de un minimarket que permite agregar, editar y eliminar registros de libros, mostrar los productos por categoría.
// Todos los registros deben ser almacenados en un archivo, a cada ítem se le identifica por un código único.
#include "Hotel.h"

Hotel::Hotel(string ub,string t,string nombre)
{
    this->ubicacion = ub;
    this->telefono = t;
    this->nombre = nombre;
}

Hotel::~Hotel()
{
    //dtor
}

void Hotel::show(){
    cout<<this->nombre<<": "<<this->ubicacion<<", "<<this->telefono<<endl;
}
void Hotel::load_habitacion(string path)
{
    ifstream in(path);
    int nro;
    string tipo;
    int id;
    float area;
    in>>nro;
    for(int i=0;i<nro;i++){
        in>>id>>tipo>>area;
        //cout<<id<<"-"<<tipo<<"-"<<area<<endl;
        Record hh(id, tipo, area);
        this->Lista.push_back(hh);
    }
    in.close();

}
void Hotel::show_habitaciones(){
    for(auto e:this->Lista){
        e.show();
    }
}
