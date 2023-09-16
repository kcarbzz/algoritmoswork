#ifndef HOTEL_H
#define HOTEL_H

#include "Record.h"
#include <vector>
#include <fstream>
#include <string> // Incluye el archivo de encabezado <string> para el tipo 'string'

using std::string; // Declara el tipo 'string'

class Hotel
{
public:
    Hotel(string ub = "Av. Primavera 2390", string t = "12309", string nombre = "UPC hotels");
    void set_ubicacion(string ub) { this->ubicacion = ub; };
    void set_tel(string t) { this->telefono = t; };
    void set_nombre(string nom) { this->nombre = nom; };
    string get_ubicacion() { return this->ubicacion; };
    string get_nombre() { return this->nombre; };
    string get_telefono() { return this->telefono; };
    void show();
    void load_habitacion(string path = "data.txt");
    void show_habitaciones();
    virtual ~Hotel();

private:
    string ubicacion;
    string telefono;
    string nombre;
    vector<Record> Lista;
};

#endif // HOTEL_H
