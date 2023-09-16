#include <iostream>
#include "Record.h"
#include "MINI.h"
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    string u = R"(
█▀█ █▀▀ █▀▀ █ █▀ ▀█▀ █▀█ █▀█
█▀▄ ██▄ █▄█ █ ▄█ ░█░ █▀▄ █▄█)";

    printf("El número es: %s\n", u.c_str());

    Record hb;
    hb.show();
    Record dos(102, "doble", 20.0);
    dos.show();
    
    MINI upc;
    upc.show();
    upc.load_records();
    upc.show_records();

    return 0;
}
