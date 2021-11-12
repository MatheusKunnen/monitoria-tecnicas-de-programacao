#pragma once

#include "Pessoa.h"
#include <string>

class Aluno : public Pessoa {
private:
    string nomeCurso;

public:
    Aluno(string curso = "Indefinido", string nome = "Sem Nome", int idade = -1);
    ~Aluno();

    void mostraDados() const;
    void setCurso(string curso);
};
