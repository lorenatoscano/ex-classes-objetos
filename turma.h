#ifndef TURMA_H
#define TURMA_H

#include <cstring>
#include "aluno.h"

using namespace std;

/*! Classe que representa uma turma do IMD */
class Turma {
  private:
    string _nome;
    string _disciplina;
    size_t _qtdAlunos;
    size_t _qtdMax;
    Aluno* _alunos;
  public:
    Turma(int max);
    ~Turma();

    string getNome();
    void setNome(string nome);
    
    string getDisciplina();
    void setDisciplina(string disciplina);

    size_t getQtdAlunos();
    void setQtdAlunos(size_t qtd);

    size_t getQtdMax();
    void setQtdMax(size_t max);

    Aluno* getAlunos();

    void addAluno(Aluno novo);
    void removeAluno(Aluno egresso);

    void print();
};


#endif