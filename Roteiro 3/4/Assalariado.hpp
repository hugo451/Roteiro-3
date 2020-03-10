#ifndef ASSALARIADO_HPP
#define aSSALARIADO_HPP
#include "Funcionario.hpp"

class Assalariado : public Funcionario
{
private:
    double salario;
public:
    Assalariado(string nome, int matricula, double salario);
    double calcularSalario();
    void setSalario(double salario);
    double getSalario();
};
#endif