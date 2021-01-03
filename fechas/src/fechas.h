/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco F. Martín Vide
 * @date 02.enero.2021
 * @brief Este archivo contiene la definición de las funciones miembro.
 *        
 * @see https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 * 
 */

#ifndef FECHAS_H
#define FECHAS_H

#include <string>
using namespace std;

void Usage(int argc, char* argv[]);

class FechaClase{
  public:
    string anio ="";
    string mes ="";
    string dia ="";
  
    FechaClase();
    void print();
    static int myCompare(string fecha1, string fecha2);
    static void es_bisiesto(string fecha);
};

#endif