#ifndef CONTAESPECIAL_HPP
#define CONTAESPECIAL_HPP
#include "Conta.hpp"

class ContaEspecial : public Conta
{
private:

public:
    ContaEspecial(string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    void definirLimite();
};
#endif