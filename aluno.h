#ifndef ALUNO_H
#define ALUNO_H

#include <cstring>
using namespace std;

/*! Classe que representa um aluno do IMD */
class Aluno {
  private:
    string _nome;
    string _matricula;
    string _curso;
    float _iea;
    int _idade;

  public:
    string getNome();
    void setNome(string nome);

    string getMatricula();
    void setMatricula(string matricula);

    string getCurso();
    void setCurso(string curso);

    float getIea();
    void setIea(float iea);

    int getIdade();
    void setIdade(int idade);

    void print();
};


#endif