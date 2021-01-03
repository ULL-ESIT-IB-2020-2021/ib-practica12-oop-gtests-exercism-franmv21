/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco F. Martín Vide
 * @date 29.diciembre.2020
 * @brief Este archivo contiene la definición de las funciones miembro.
 *        
 * @see https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 * 
 */

#include "complejo.h"
#include <iostream>
using namespace std;

Complejo::Complejo(){
}
Complejo::Complejo(int tempReal, int tempImaginaria){
    real = tempReal;
    imaginaria = tempImaginaria;
}

Complejo Complejo::add(Complejo z1, Complejo z2){
    Complejo temp;
    temp.real = z1.real + z2.real;
    temp.imaginaria = z1.imaginaria + z2.imaginaria;
    return temp;
}

Complejo Complejo::sub(Complejo z1, Complejo z2){
    Complejo temp;
    temp.real = z1.real - z2.real;
    temp.imaginaria = z1.imaginaria - z2.imaginaria;
    return temp;
}
  
void Complejo::print(){
    if(imaginaria >= 0){
      cout << real << "+" << imaginaria << "i" << endl;
    } else {
        cout << real << "" << imaginaria << "i" << endl;
    }
}