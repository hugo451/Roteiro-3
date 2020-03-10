#include "Comissionado.hpp"

Comissionado::Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao):
    Funcionario(nome, matricula)
{
    this->vendasSemanais = vendasSemanais;
    this->percentualComissao = percentualComissao;
}
double Comissionado::calcularSalario()
{
    return vendasSemanais*percentualComissao;
}
void Comissionado::setVendasSemanias(double vendasSemanais)
{
    this->vendasSemanais = vendasSemanais;
}
void Comissionado::Comissionado::setPercentualComissao(double percentualComissao)
{
    this->percentualComissao = percentualComissao;
}
double Comissionado::getVendasSemanias()
{
    return vendasSemanais;
}
double Comissionado::getPercentualComissao()
{
    return percentualComissao;
}