#ifndef HORISTA_HPP
#define HORISTA_HPP
#include "Funcionario.hpp"

class Horista : public Funcionario
{
private:
    double salarioPorHora;
    double horasTrabalhadas;
public:
    Horista(string nome, int matricula, double salarioPorHora, double horasTrabalhadas);
    double calcularSalario();
    void setSalarioPorHora(double salarioPorHora);
    void setHorasTrabalhadas(double horasTrabalhadas);
    double getSalarioPorHora();
    double getHorasTrabalhadas();
};
#endif