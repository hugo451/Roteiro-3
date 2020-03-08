#ifndef CONTA_HPP
#define CONTA_HPP
#include <iostream>
#include "IConta.hpp"
using namespace std;
class Conta : public IConta
{
protected:
    string nomeCliente;
    double saldo;
    int numeroConta;
    double salarioMensal;
    double limite;
public:
    Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo);
    void sacar(double valor);
    void depositar(double valor);
    void definirLimite();
    void setNomeCliente(string nomeCliente);
    void setSaldo(double saldo);
    void setNumeroConta(int numeroConta);
    void setSalarioMensal(double salarioMensal);
    string getNomeCliente();
    double getSaldo();
    int getNumeroConta();
    double getSalarioMensal();
    double getLimite();

};
#endif