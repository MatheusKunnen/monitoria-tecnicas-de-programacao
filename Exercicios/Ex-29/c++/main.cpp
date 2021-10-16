#include "CarroEsporte.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
  /* 
    Consumo: 12 quilômetros por litro de combustível 
    Capacidade: 45 litros
  */
  Carro gol = Carro(12, 45);
  gol.abastecer(20); // Abastece com 20 litros de combustível.
  /* 
    Consumo: 14 quilômetros por litro de combustível 
    Capacidade: 40 litros
  */
  Carro uno = Carro(14, 40);
  // Abastece com 250 litros de combustível.
  // Para verificar que carrega unicamente até sua capacidade máxima
  uno.abastecer(250);

  uno.andar(150);                   // Anda 150 quilômetros.
  int sobra = uno.getCombustivel(); // Exibe o combustível que resta
  cout << "Litros restantes no Uno: " << sobra << endl;

  gol.andar(80); // Anda 80 quilômetros.
  sobra = gol.getCombustivel();
  cout << "Litros restantes no Gol: " << sobra << endl;

  CarroEsporte ferrari = CarroEsporte(16, 60, 100, 15, 80);
  /*
    Consumo: 16 quilômetros por litro de combustível (+ 50% do consumo)
    Capacidade: 60 litros
    Tamanho do Spoiler: 100
    Número de Adesivos Tuning: 15
    Potência Extra do Turbo: 80
  */
  ferrari.abastecer(50); // Abastece com 50 litros
  ferrari.andar(320); // Anda 320 quilômetros
  
  sobra = ferrari.getCombustivel();
  cout << "Litros restantes na Ferrari: " << sobra << endl;

  // Informando os atributos do exercício
  cout << "Tamanho do Spoiler na Ferrari:: " << ferrari.getTamSpoiler() << endl
       << "Número de Adesivos Tuning na Ferrari:: " << ferrari.getNumAdesivosTuning() << endl
       << "Potência Extra do Turbo na Ferrari:: " << ferrari.getPotExtTurbo() << endl; 

  return 0;
}