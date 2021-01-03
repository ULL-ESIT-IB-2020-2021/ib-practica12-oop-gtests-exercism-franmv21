/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco F. Martín Vide
 * @date 29.diciembre.2020
 * @brief La finalidad de este programa será trabajar con números complejos(mostrar ,sumar y restar).
 * 
 */

#include <iostream>
#include "complejo.h"
using namespace std;


int main (){
  Complejo z1(4,5), z2(7, -8); 
  Complejo resultado;
  resultado = resultado.add(z1, z2);
  resultado.print();
  resultado = resultado.sub(z1, z2);
  resultado.print();

}