#pragma once

class Pessoa {
protected:
    char nome[30];
    Pessoa* pai;
    Pessoa* mae;

public:
    Pessoa(const char* nome = "");
    Pessoa(char* nome);
    ~Pessoa();

    char* getNome();
    void setNome(char* nome);
};