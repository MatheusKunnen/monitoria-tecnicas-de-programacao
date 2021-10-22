#include "Familia.h"
#include "Pessoa.h"

#include <iostream>

Familia::Familia(const char* sobrenomeF) :
sobrenome(sobrenomeF) {
}

Familia::Familia(char* sobrenomeF) :
sobrenome(sobrenomeF) {
}

Familia::~Familia() {
}

string Familia::getSobrenome() {
    return sobrenome;
}

void Familia::listarArvoreFamiliar() {

    cout << "Familia " << sobrenome << endl
         << "Principal: ";
    if (pPrincipal != NULL)
        cout << pPrincipal->getNomeCompleto() << endl;
    else
        cout << "Não definido" << endl;

    cout << "Conjuje: ";
    if (pConjuje != NULL)
        cout << pConjuje->getNomeCompleto() << endl;
    else
        cout << "Não definido" << endl;

    cout << "Filhos: ";
    if (listaFilhos.size() > 0) {
        cout << endl;
        for (int i = 0; i < listaFilhos.size(); i++)
            cout << " - " << listaFilhos[i]->getNomeCompleto() << endl;
    } else
        cout << "A familia não possui filhos!" << endl;
}

void Familia::adicionarFilho(Pessoa* pFilho) {
    if (pFilho == NULL) {
        cout << "Ponteiro para filho NULL" << endl;
        return;
    }
    listaFilhos.push_back(pFilho);

    pFilho->setFamilia(this);
    pFilho->setMae(pPrincipal);
    pFilho->setPai(pConjuje);

    if (pPrincipal)
        pPrincipal->adicionarFilho(pFilho);

    if (pConjuje)
        pConjuje->adicionarFilho(pFilho);
}

void Familia::setPrincipal(Pessoa* p) {
    pPrincipal = p;
    p->setFamilia(this);
}

void Familia::setConjuje(Pessoa* p) {
    pConjuje = p;
    p->setFamilia(this);
}
