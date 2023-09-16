#ifndef HABITACION_H
#define HABITACION_H
#include <string>
#include <iostream>
using namespace std;
class Record
{
    public:
        Record(int nh=101,string tip="simple",float area=10.0);
        void show();
        virtual ~Record();
        void set_nro_hab(int nh){this->nro_hab=nh;};
        void set_tipo(string tp){this->tipo=tp;};
        void set_area(float ar){this->area=ar;};
        int get_nro_hab(){return this->nro_hab;};
        string get_tipo(){return this->tipo;};
        float get_area(){return this->area;};
    protected:

    private:
        int nro_hab;
        string tipo;
        float area;

};

#endif // HABITACION_H
