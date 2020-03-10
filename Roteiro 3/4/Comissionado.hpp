#ifndef COMISSIONADO_HPP
#define COMISSIONADO_HPP
#include "Funcionario.hpp"

class Comissionado : public Funcionario
{
private:
    double vendasSemanais;
    double percentualComissao;
public:
    Comissionado(string nome, int matricula, double vendasSemanais, double percentualComissao);
    double calcularSalario();
    void setVendasSemanias(double vendasSemanais);
    void setPercentualComissao(double percentualComissao);
    double getVendasSemanias();
    double getPercentualComissao();
};
#endif