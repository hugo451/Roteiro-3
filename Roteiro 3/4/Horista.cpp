#include "Horista.hpp"

Horista::Horista(string nome, int matricula, double salarioPorHora, double horasTrabalhadas):
    Funcionario(nome, matricula)
{
    this->salarioPorHora = salarioPorHora;
    this->horasTrabalhadas = horasTrabalhadas;
}
double Horista::calcularSalario()
{
    return horasTrabalhadas*salarioPorHora;
}
void Horista::setSalarioPorHora(double salarioPorHora)
{
    this->salarioPorHora = salarioPorHora;
}
void Horista::setHorasTrabalhadas(double horasTrabalhadas)
{
    this->horasTrabalhadas = horasTrabalhadas;
}
double Horista::getSalarioPorHora()
{
    return salarioPorHora;
}
double Horista::getHorasTrabalhadas()
{
    return horasTrabalhadas;
}