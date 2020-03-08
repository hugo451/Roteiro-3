#include "ContaEspecial.hpp"

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, int numeroConta, double saldo):
    Conta(nomeCliente, salarioMensal, numeroConta, saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}
void ContaEspecial::definirLimite()
{
    limite = 4*salarioMensal;
}