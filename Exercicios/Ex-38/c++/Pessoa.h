#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Pessoa {
protected:
    string nome;
    int idade;

public:
    Pessoa(string nome = "Sem Nome", int idade = -1);
    ~Pessoa();

    virtual void mostraDados() const;
    void setNome(string nome);
    void setIdade(int idade);
};