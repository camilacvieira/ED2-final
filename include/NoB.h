#ifndef NOB_H
#define NOB_H
#include "registro.h"

class NoB
{
public:
    NoB(int d);
    ~NoB();
    int numeroChaves;

    //getters
    registro **getRegistros();
    NoB *getFilho(int i);
    bool ehFolha();
    NoB *getPai();
    NoB **getFilhos();

    //setters
    void setPai(NoB *no);
    void setFolha(bool ehFolha);
    void setFilho(NoB *no, int i);

private:
    bool folha;
    NoB *pai;
    NoB **filhos;
    registro **registros;
    int d;


};

#endif // NOB_H
