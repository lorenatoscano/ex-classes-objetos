#include <iostream>
#include "aluno.h"
#include "turma.h"

using namespace std;

/*! Getters dos atributos de uma Turma */
string Turma::getNome() {
  return _nome;
}

string Turma::getDisciplina() {
  return _disciplina;
}

size_t Turma::getQtdAlunos() {
  return _qtdAlunos;
}

size_t Turma::getQtdMax() {
  return _qtdMax;
}

Aluno* Turma::getAlunos() {
  return _alunos;
}

/*! Setters dos atributos de uma Turma */
void Turma::setNome(string nome) {
  _nome = nome;
}

void Turma::setDisciplina(string disciplina) {
  _disciplina = disciplina;
}

void Turma::setQtdAlunos(size_t qtd) {
  _qtdAlunos = qtd;
}

void Turma::setQtdMax(size_t max) {
  _qtdMax = max;
}

/*! Adição e remoção de alunos da lista */
void Turma::addAluno(Aluno novo) {
  _alunos[_qtdAlunos] = novo;
  _qtdAlunos++;
}

/*! Imprime os alunos da turma */
void Turma::print() {
  cout << "------------------------------------------------" << endl;
  cout << _disciplina << " - " << _nome << endl;
  cout << _qtdAlunos << "/" << _qtdMax << " alunos" << endl;
  cout << "------------------------------------------------" << endl;
  for (size_t i = 0; i < _qtdAlunos; i++) {
    cout << "Dados do(a) " << i + 1 << "o aluno(a):" << endl;
    _alunos[i].print();
  }
}

/*! Inicia a turma com 0 alunos matriculados */
Turma::Turma() {
  _qtdAlunos = 0;
}