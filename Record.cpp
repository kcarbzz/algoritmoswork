#include "Record.h"
#include <iostream> // Include the <iostream> header file for 'cout'

using namespace std; // Add the 'using namespace std;' directive

Record::Record(int nh, string tip, float area) {
    this->area = area;
    this->nro_hab = nh;
    this->tipo = tip;
}

Record::~Record() {
    //dtor
}

void Record::show() {
    cout << this->nro_hab << ": " << this->tipo << ", " << this->area << endl;
}
