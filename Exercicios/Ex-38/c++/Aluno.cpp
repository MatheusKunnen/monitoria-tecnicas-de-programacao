#include "Aluno.h"

Aluno::Aluno(string curso,string nome, int idade) :
Pessoa(nome, idade) {
    this->nomeCurso = curso;
}

Aluno::~Aluno() {
}

void Aluno::mostraDados() const {
    cout << "Nome  do aluno: " << nome << endl
         << "Idade do aluno: " << idade << endl
         << "Curso do aluno: " << nomeCurso << endl;
}

void Aluno::setCurso(string curso) {
    this->nomeCurso = curso;
}
