#include <iostream>
#include "aluno.h"
#include "turma.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Aluno *a1 = new Aluno;

  a1->setNome("Lorena");
  a1->setMatricula("20190041430");
  a1->setCurso("BTI");
  a1->setIea(6.8162);
  a1->setIdade(21);

  Turma *lp = new Turma;

  lp->setNome("T02");
  lp->setDisciplina("Linguagem de Programacao I");
  lp->setQtdMax(40);
  lp->addAluno(*a1);
  lp->print();


  delete a1;
  delete lp;

  return 0;
}
