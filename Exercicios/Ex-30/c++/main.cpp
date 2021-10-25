#include <iostream>
#include "Quadrado.h"
#include "TrianguloEq.h"

using std::cout;
using std::endl;

int main()
{
  // Cria quadrados de lados 2 e 4
  Quadrado quadrado_1(2),
           quadrado_2(4);

  // Cria triângulos equiláteros de lados 3 e 6
  TrianguloEq triangulo_1(3),
              triangulo_2(6);

  // Informa dados do quadrado de lado 2
  cout << "Poligono de lado = " << quadrado_1.getNumLados()
       << ", tamanho de cada lado = " << quadrado_1.getTamLados()
       << ": Perimetro = " << quadrado_1.calculaPerimetro()
       << ", Angulo Interno = " << quadrado_1.calculaAnguloInterno()
       << ", Area = " << quadrado_1.calculaArea()
       << endl << endl;
  
  // Informa dados do quadrado de lado 4
  cout << "Poligono de lado = " << quadrado_2.getNumLados()
       << ", tamanho de cada lado = " << quadrado_2.getTamLados()
       << ": Perimetro = " << quadrado_2.calculaPerimetro()
       << ", Angulo Interno = " << quadrado_2.calculaAnguloInterno()
       << ", Area = " << quadrado_2.calculaArea()
       << endl << endl;

  // Informa dados do triângulo de lado 3
  cout << "Poligono de lado = " << triangulo_1.getNumLados()
       << ", tamanho de cada lado = " << triangulo_1.getTamLados()
       << ": Perimetro = " << triangulo_1.calculaPerimetro()
       << ", Angulo Interno = " << triangulo_1.calculaAnguloInterno()
       << ", Area = " << triangulo_1.calculaArea()
       << endl << endl;

  // Informa dados do triângulo de lado 6
  cout << "Poligono de lado = " << triangulo_2.getNumLados()
       << ", tamanho de cada lado = " << triangulo_2.getTamLados()
       << ": Perimetro = " << triangulo_2.calculaPerimetro()
       << ", Angulo Interno = " << triangulo_2.calculaAnguloInterno()
       << ", Area = " << triangulo_2.calculaArea()
       << endl;

  return 0;
}