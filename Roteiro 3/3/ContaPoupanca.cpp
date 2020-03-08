#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(string nomeCliente, int numeroConta, double salarioMensal, double saldo, int variacao, double taxaRendimento):
    Conta(nomeCliente, numeroConta, salarioMensal, saldo)
{
    this->variacao = variacao;
    this->taxaRendimento = taxaRendimento;
}

void ContaPoupanca::setVariacao(int variacao)
{
    this->variacao = variacao;
}

void ContaPoupanca::setTaxaRendimento(double taxaRendimento)
{
    this->taxaRendimento = taxaRendimento;
}

int ContaPoupanca::getVariacao()
{
    return variacao;
}

double ContaPoupanca::getTaxaRendimento()
{
    return taxaRendimento;
}

double ContaPoupanca::render()
{
    if(variacao == 1){
        saldo *= (1 + (taxaRendimento / 100));
        taxaRendimento += 0.5;
    }

    if(variacao == 51){
        saldo *= (1 + (taxaRendimento / 100));
    }
}