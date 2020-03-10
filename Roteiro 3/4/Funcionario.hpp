#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <iostream>

using namespace std;

class Funcionario
{
protected:
    string nome;
    int matricula;
public:
    Funcionario(string nome, int matricula);
    virtual double calcularSalario();
    void setNome(string nome);
    void setMatricula(int matricula);
    string getNome();
    int getMatricula();
};
#endif