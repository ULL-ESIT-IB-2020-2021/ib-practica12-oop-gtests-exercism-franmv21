/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Francisco F. Martín Vide
 * @date 29.diciembre.2020
 * @brief Declaración de la clase.
 *        
 * @see https://www.learncpp.com/cpp-tutorial/class-code-and-header-files/
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 * 
 */

#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo{
  public:
    int real, imaginaria;
    double rial;
    Complejo();
    Complejo(int tempReal, int tempImaginaria);
    Complejo add(Complejo z1, Complejo z2);
    Complejo subcomplejo(Complejo z1, Complejo z2);
    void print();
    Complejo subreal(Complejo z1, double z2);
    Complejo subentero(Complejo z1, int z2);
    void printreal();
};


#endif