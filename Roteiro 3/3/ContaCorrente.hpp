#ifndef CONTACORRENTE_HPP
#define CONTACORRENTE_HPP
#include "Conta.hpp"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(string nomeCliente, int numeroConta, double salarioMensal, double saldo);

        void setSalarioMensal(double salarioMensal);
        void setLimite(double limite);

};
#endif