#include <iostream>
#include "Record.h"
#include "Hotel.h"
using namespace std;

int main()
{
    /*
    Habitacion hb;
    hb.show();
    Habitacion dos(102,"doble",20.0);
    dos.show();
    */
    Hotel upc;
    upc.show();
    upc.load_habitacion();
    upc.show_habitaciones();

    return 0;
}
