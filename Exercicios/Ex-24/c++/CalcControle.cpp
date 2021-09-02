#include "CalcControle.hpp"
CalcControle::CalcControle() : inteface(),
                               dados()
{
}

CalcControle::CalcControle(CalcInterface &calcInterface, CalcDados &calcDados) : inteface(calcInterface),
                                                                                 dados(calcDados)
{
}

CalcControle::~CalcControle()
{
}

void CalcControle::executar()
{
  // Carregamos os dados
  this->dados.setOperando(1, this->inteface.recebeOperando(1));
  this->dados.setOperando(2, this->inteface.recebeOperando(2));
  this->dados.setOperacao(this->inteface.recebeOperacao());
  // Executamos a operacao
  double resultado = this->operar(this->dados.getOperando(1), this->dados.getOperando(2), this->dados.getOperacao());
  // Mostramos o resultado
  this->inteface.mostraResultado(resultado);
}

double CalcControle::operar(const double &n1, const double &n2, const char &operacao)
{
  switch (operacao)
  {
  case '*':
    return n1 * n2;
  case '/':
    return n1 / n2;
  case '-':
    return n1 - n2;
  case '+':
    return n1 + n2;
  default:
    cout << "Operação " << operacao << " inválida" << endl;
    exit(1);
  }
}