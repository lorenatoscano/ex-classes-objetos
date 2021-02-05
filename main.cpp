#include <iostream>
#include "aluno.h"
#include "turma.h"

using namespace std;

int main(int argc, char const *argv[])
{
  Aluno *a1 = new Aluno;
  Aluno *a2 = new Aluno;

  a1->setNome("Lorena");
  a1->setMatricula("20190041430");
  a1->setCurso("BTI");
  a1->setIea(6.8162);
  a1->setIdade(21);

  a2->setNome("Diego");
  a2->setMatricula("20190045390");
  a2->setCurso("BTI");
  a2->setIea(8.34);
  a2->setIdade(22);

  Turma *lp = new Turma(40);

  lp->setNome("T02");
  lp->setDisciplina("Linguagem de Programacao I");
  lp->addAluno(*a1);
  lp->addAluno(*a2);
  lp->print();


  delete a1;
  delete a2;
  delete lp;

  return 0;
}
