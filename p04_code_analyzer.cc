// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 4: Expresiones regulares
// Autor: Enrique Álvarez Mesa
// Correo: alu0101142104@ull.es
// Fecha: 25/10/2022
// Archivo  calculator.cc
//    Programa principal.

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

// Metodo que comprueba que los argumentos introducidos son correctos, además de
// que el fichero de entrada existe. Muestra también información sobre el uso
// del programa.
bool ComprobacionEntrada(int& argc, char* argv[]) {
  std::string help = "-h";
  std::string help_ = "--help";
  if (argc == 3) { 
    std::string fichero_entrada1 = argv[1];
    std::ifstream archivo_entrada1(fichero_entrada1);
    std::string fichero_salida = argv[2];

    if (archivo_entrada1.is_open() && !fichero_salida.empty()) {
      return true;
    } else {
      std::cout << "No es posible abrir el fichero de entrada o salida." << std::endl;
      std::cout << "Ejecute para más información: ./p04_code_analyzer --help || ./p04_code_analyzer -h" << std::endl;
    return false;
    }
   } else if(argc == 2 && (argv[1] == help || argv[1] == help_)) {
      std::cout << "Modo de ejecución: ./p04_code_analyzer filein.cc fileout.txt" << std::endl;
  } else {
    std::cout << "El número o los parámetros de entrada no son correctos." << std::endl;
    return false;
  }
  return false;
}

std::vector<std::string> LeerFichero(std::string fichero_entrada1) {
  std::vector<std::string> lenguaje;
  std::ifstream archivo_entrada1(fichero_entrada1);
  std::string linea = "";

  if (archivo_entrada1.is_open()) {
    while (getline(archivo_entrada1, linea)) {
      lenguaje.push_back(linea);
    }
  }
  return lenguaje;
}


int main (int argc, char* argv[]) {
  if(ComprobacionEntrada(argc, argv)) {
    std::vector<std::string> entrada = LeerFichero(argv[1]);
  }
  return 0;
}