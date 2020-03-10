#include "Assalariado.hpp"

Assalariado::Assalariado(string nome, int matricula, double salario):
    Funcionario(nome, matricula)
{
    this->salario = salario;
}
double Assalariado::calcularSalario()
{
    return salario;
}
void Assalariado::setSalario(double salario)
{
    this->salario = salario;
}
double Assalariado::getSalario()
{
    return salario;
}