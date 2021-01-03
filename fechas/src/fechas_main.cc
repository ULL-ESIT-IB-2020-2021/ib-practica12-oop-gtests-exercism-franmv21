/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco F. Martín Vide
 * @date 02.enero.2021
 * @brief La finalidad de este programa es recoger una lista de fechas de un archivo de texto y
 *        ordenarlas en orden cronológico (ascendente) y escribirlas (ya ordenadas) en otro archivo
 *        de texto. Además, también se añade un método para saber si los años de las fechas son bisiestos o no.
 * 
 */

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <algorithm>
#include "fechas.h"
using namespace std;

int main(int argc, char* argv[]){
  Usage(argc, argv);

  string strEntrada;
  vector <string> fechas;
  ifstream fichero_entrada;
  fichero_entrada.open({argv[1]});

  while(fichero_entrada >> strEntrada){
    fechas.push_back(strEntrada);
  }

  ofstream fichero_salida;
  fichero_salida.open({argv[2]});
  if(fichero_salida.is_open()){
    sort(fechas.begin(), fechas.end(), FechaClase::myCompare);
      for(int i = 0; i < fechas.size(); i++){
        cout << fechas[i] << " ";
        FechaClase::es_bisiesto(fechas[i]);
        fichero_salida << (fechas[i]) << endl;
      }
  } 

}