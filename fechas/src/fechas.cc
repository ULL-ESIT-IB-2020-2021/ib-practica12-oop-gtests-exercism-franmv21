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

#include <iostream>
#include <string>
#include <algorithm>
#include "fechas.h"
using namespace std;


void Usage(int argc, char* argv[]){
  if(argc <= 1 || argc > 3){
    cout << argv[0] << " - Gestion de fichas" << endl;
    cout << "Modo de uso: " << argv[0] << " fichero_entrada.txt fichero_salida.txt" << endl;
    cout << "Pruebe " << argv[0] << " --help para más información" << endl;
    exit(EXIT_SUCCESS);
    }
  string parametro{argv[1]};
  if(parametro == "--help"){
    cout << "Introduzca como primer parámetro un fichero de texto (entrada) y como segundo parámetro otro fichero de texto (salida)" << endl;
    exit(EXIT_SUCCESS);
  }
}


FechaClase::FechaClase(){
}

void FechaClase::print(){
    cout << dia << "/" << mes << "/" << anio << endl;
}

  int FechaClase::myCompare(string fecha1, string fecha2){
  string dia1 = fecha1.substr(0, 2);
  string mes1 = fecha1.substr(3, 2);
  string anio1 = fecha1.substr(6, 4);
 
  string dia2 = fecha2.substr(0, 2);
  string mes2 = fecha2.substr(3, 2);
  string anio2 = fecha2.substr(6, 4);
 
  if (anio1 < anio2){
    return 1;}
  if (anio1 > anio2){
    return 0;}
 
  if (mes1 < mes2){
    return 1;}
  if (mes1 > mes2){
     return 0;}
 
  if (dia1 < dia2){
    return 1;}
  if (dia1 > dia2){
     return 0;}
 return 0;
}

void FechaClase::es_bisiesto(string fecha){
  string anio = fecha.substr(6, 4);
  int anio_ = stoi(anio);
  if((anio_ % 4 == 0) && (anio_ % 100 != 0) || (anio_ % 400 == 0)){
    cout << "Es bisiesto" << endl;
  } else {
    cout << "No es bisiesto" << endl;
  }
}
