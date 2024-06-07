

#ifndef Producto_h
#define Producto_h
#include <stdio.h>
#include <string>
#include <math.h>
using namespace std;

class Producto{
    private:
    string nombre;
    int precio;
    int peso;

    public:
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    void setNombre(string);
    void setPrecio(int);
    void setPeso(int);

    string getNombre();
    int getPrecio();
    int getPeso();

    virtual string str();
    virtual int calculaTotalPagar();
};


#endif /* Producto_h */