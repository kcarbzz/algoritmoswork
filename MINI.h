//Desarrollar un sistema de registro de stock de un minimarket que permite agregar, editar y eliminar registros de libros, mostrar los productos por categoría.
// Todos los registros deben ser almacenados en un archivo, a cada ítem se le identifica por un código único.
#ifndef MINI_H
#define MINI_H

#include "Record.h"
#include <vector>
#include <fstream>
#include <string> // Incluye el archivo de encabezado <string> para el tipo 'string'

using std::string; // Declara el tipo 'string'

class MINI
{
public:
    MINI(string ub = "152-154 Port Tennant Road, Port Tennant, Swansea SA1 8JQ", string t = "+44 1792 651028", string nom = "Rowberry ", string wb="https://www.rowberrybridalandfashion.com/accesories/bags-and-shoes/");
    void set_ubicacion(string ub) { this->ubicacion = ub; };
    void set_tel(string t) { this->telefono = t; };
    void set_nombre(string nom) { this->nombre = nom; };
    void set_web(string wb) { this->web = wb; };

    string get_ubicacion() { return this->ubicacion; };
    string get_nombre() { return this->nombre; };
    string get_telefono() { return this->telefono; };
    string get_telefono() { return this->web; };

    void show();
    void load_habitacion(string path = "data.txt");
    void show_habitaciones();
    virtual ~MINI();

private:
    string ubicacion;
    string telefono;
    string nombre;
    string web;
    vector<Record> Lista;
};

#endif // MINI_H
