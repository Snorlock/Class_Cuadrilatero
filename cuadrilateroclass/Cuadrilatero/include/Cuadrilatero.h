#ifndef CUADRILATERO_H
#define CUADRILATERO_H

#include<iostream>

using namespace std;

class Cuadrilatero
{
    public: // metodos
        Cuadrilatero(float x_val, float y_val){
        x = x_val;
        y = y_val;
        }
        void perimetro(){
        float _perimetro;
        _perimetro = (2*x) + (2*y);
        cout << "El perimetro es: " << _perimetro << endl;
        }
        void area(){
        float _area;
        _area = x*y;
        cout << "El area es: " << _area << endl;
        }


    private: // atributos
         float x;
         float y;

};

#endif // CUADRILATERO_H
