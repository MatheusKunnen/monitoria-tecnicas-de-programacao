#pragma once

#include <string>
#include <vector>
using namespace std;

class Pessoa;

class Familia {
private:
    Pessoa* pPrincipal;
    Pessoa* pConjuje;
    vector<Pessoa*> listaFilhos;
    string sobrenome;

public:
    Familia(const char* sobrenomeF = "");
    Familia(char* sobrenomeF);
    ~Familia();

    string getSobrenome();
    void listarArvoreFamiliar();
    void adicionarFilho(Pessoa* pFilho);
    void setPrincipal(Pessoa* p);
    void setConjuje(Pessoa* p);
};
