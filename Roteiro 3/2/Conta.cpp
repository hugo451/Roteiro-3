#include "Conta.hpp"

Conta::Conta(string nomeCliente, double salarioMensal, int numeroConta, double saldo)
{
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}
void Conta::sacar(double valor)
{
    if(valor > saldo)
    {
        cout << "Trasação invalida!" << endl; 
    }
    else
    {
        saldo = saldo - valor;
        cout << "Trasação efetuada com sucesso!" << endl;
    }
    
}
void Conta::depositar(double valor)
{
    saldo = saldo + valor;
    cout << "Trasação efetuada com sucesso!" << endl;
}
void Conta::definirLimite()
{
    limite = 2*salarioMensal;
}
void Conta::setNomeCliente(string nomeCliente)
{
    this->nomeCliente = nomeCliente;
}
void Conta::setSaldo(double saldo)
{
    this->saldo = saldo;
}
void Conta::setNumeroConta(int numeroConta)
{
    this->numeroConta = numeroConta;
}
void Conta::setSalarioMensal(double salarioMensal)
{
    this->salarioMensal = salarioMensal;
}
string Conta::getNomeCliente()
{
    return nomeCliente;
}
double Conta::getSaldo()
{
    return saldo;
}
int Conta::getNumeroConta()
{
    return numeroConta;
}
double Conta::getSalarioMensal()
{
    return salarioMensal;
}
double Conta::getLimite()
{
    return limite;
}