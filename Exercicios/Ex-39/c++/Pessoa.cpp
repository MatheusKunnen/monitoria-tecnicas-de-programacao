#include "Pessoa.h"

unsigned int Pessoa::quantidadePessoas = 0;

Pessoa::Pessoa(string nome, int idade) {
    this->nome = nome;
    this->idade = idade;
    quantidadePessoas++;
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

void Pessoa::mostraQuantidadePessoas() const {
    cout << "Quantidade de pessoas existentes no sistema: " << quantidadePessoas << endl;
}