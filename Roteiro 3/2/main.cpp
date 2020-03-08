#include <iostream>
#include "IConta.hpp"
#include "Conta.hpp"
#include "ContaEspecial.hpp"


int main()
{
    Conta conta1 = Conta("André Hugo", 100000, 00000, 1000000);
    ContaEspecial conta2 = ContaEspecial("Joãozinho", 100500, 00001, 201000);

    conta1.definirLimite();
    conta2.definirLimite();

    cout << "Conta 1 limite: " << conta1.getLimite() << endl;
    cout << "Conta 2 limite: " << conta2.getLimite() << endl;

    cout << "Conta 1 saldo: " << conta1.getSaldo() << endl;
    cout << "Conta 2 saldo: " << conta2.getSaldo() << endl;

    cout << "Apos um deposito de 200 reais:"<< endl;
    conta1.depositar(200);
    conta2.depositar(200);

    cout << "Conta 1 saldo: " << conta1.getSaldo() << endl;
    cout << "Conta 2 saldo: " << conta2.getSaldo() << endl;

    cout << "Apos um saque de 300000:" << endl;
    conta1.sacar(300000);
    conta2.sacar(300000);

    cout << "Conta 1 saldo: " << conta1.getSaldo() << endl;
    cout << "Conta 2 saldo: " << conta2.getSaldo() << endl;

    cout << "Conta 1 proprietário: " << conta1.getNomeCliente() << endl;
    cout << "Conta 2 proprietário: " << conta2.getNomeCliente() << endl;

    return 0;
}