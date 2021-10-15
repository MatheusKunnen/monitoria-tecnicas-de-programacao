#include "Pessoa.h"

#include <string.h>

Pessoa::Pessoa(const char* nome) {
    strcpy(this->nome, nome);
    pai = NULL;
    mae = NULL;
}

Pessoa::Pessoa(char* nome) {
    strcpy(this->nome, nome);
    pai = NULL;
    mae = NULL;
}

Pessoa::~Pessoa() {
    pai = NULL;
    mae = NULL;
}

char* Pessoa::getNome() {
    return nome;
}

void Pessoa::setNome(char* nome) {
    strcpy(this->nome, nome);
}