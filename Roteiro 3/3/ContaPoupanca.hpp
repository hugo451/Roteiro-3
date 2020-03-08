#ifndef CONTAPOUPANCA_HPP
#define CONTAPOUPANCA_HPP
#include "Conta.hpp"

class ContaPoupanca : public Conta
{
    public:
        ContaPoupanca(string nomeCliente, int numeroConta, double salarioMensal, double saldo, int variacao, double taxaRendimento);

        void setVariacao(int variacao);
        void setTaxaRendimento(double taxaRendimento);

        int getVariacao();
        double getTaxaRendimento();

        double render();

    protected:
        int variacao;
        double taxaRendimento;
};

#endif