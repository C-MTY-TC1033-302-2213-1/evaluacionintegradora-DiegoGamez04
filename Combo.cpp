
#include "Combo.h"
using namespace std;


    Combo::Combo() : Producto(){
        clave = 0;
    }

    Combo::Combo(string _nombre, int _precio, int _peso, int _clave)
    :Producto(_nombre, _precio, _peso){
        clave = _clave;
    }

    string Combo::str(){
        return nombre + '-' + '$' + std::to_string(precio) +
        '-' + std::to_string(peso) + '-' + '$'+ 
        std::to_string(calculaTotalPagar()) + '-' + std::to_string(clave);

    }

    int Combo::calculaTotalPagar(){
    int total = precio * peso * clave;
    if(clave == 1){
        return total - (total/100 * 25);
    }else if(clave == 2){
        return total - (total/100 * 30);
    }else{
        return total;
    }
}
