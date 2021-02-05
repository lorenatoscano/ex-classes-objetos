#include <iostream>
#include "aluno.h"

using namespace std;

/*! Getters dos atributos de um Aluno */
string Aluno::getNome() {
  return _nome;
}

string Aluno::getMatricula() {
  return _matricula;
}

string Aluno::getCurso() {
  return _curso;
}

float Aluno::getIea() {
  return _iea;
}

/*! Setters dos atributos de Aluno */
void Aluno::setIea(float iea) {
  _iea = iea;
}

void Aluno::setNome(string nome) {
  _nome = nome;
}

void Aluno::setMatricula(string matricula) {
  _matricula = matricula;
}

void Aluno::setCurso(string curso) {
  _curso = curso;
}

int Aluno::getIdade() {
  return _idade;
}

void Aluno::setIdade(int idade) {
  _idade = idade;
}

/*! Imprime os atributos de um aluno */
void Aluno::print() {
  cout << "- Nome: " << _nome << endl;
  cout << "- Matricula: " << _matricula << endl;
  cout << "- Curso: " << _curso << endl;
  cout << "- IEA: " << _iea << endl;
  cout << "- Idade: " << _idade << endl << endl;
}