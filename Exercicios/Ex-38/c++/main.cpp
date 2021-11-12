#include "Aluno.h"
#include "Pessoa.h"

#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int opcao = 0;
    Pessoa* p = NULL;
    string nomePessoa;
    string nomeCurso;
    int idade = 0;
    char input = 'A';

    while (opcao != 1 && opcao != 2) {
        cout << "Digite 1 para criar uma Pessoa e 2 para criar um Aluno: ";
        scanf("%d%*c", &opcao);
    }

    cout << "Digite o nome da pessoa: \n";
    getline(cin, nomePessoa);

    cout << "Digite idade da pessoa: ";
    scanf("%d%*c", &idade);

    if (opcao == 1) {
        p = new Pessoa(nomePessoa, idade);
    } //
    else {
        cout << "Digite o nome do curso da pessoa:\n";
        getline(cin, nomeCurso);
        p = static_cast<Pessoa*>(new Aluno(nomeCurso, nomePessoa, idade));
    }

    cout << endl;

    p->mostraDados();

    delete p;

    return 0;
}