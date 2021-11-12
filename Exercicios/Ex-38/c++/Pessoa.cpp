#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
}

Pessoa::~Pessoa() {
}

void Pessoa::mostraDados() const {
    cout << "Nome da pessoa: " << nome << endl
         << "Idade da pessoa: " << idade << endl;
}

void Pessoa::setNome(string nome) {
    this->nome = nome;
}

void Pessoa::setIdade(int idade) {
    this->idade = idade;
}
