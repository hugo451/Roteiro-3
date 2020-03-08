#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(string nomeCliente, int numeroConta, double salarioMensal, double saldo):
    Conta(nomeCliente, numeroConta, salarioMensal, saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

void ContaCorrente::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}

void ContaCorrente::setLimite(double limite)
{
    this->limite = limite;
}
