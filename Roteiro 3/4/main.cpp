#include "SistemaGerenciaFolha.hpp"
#include "Funcionario.hpp"
#include "Assalariado.hpp"
#include "Horista.hpp"
#include "Comissionado.hpp"

using namespace std;

int main()
{
    SistemaGerenciaFolha sistg = SistemaGerenciaFolha(2000000);

    Assalariado func1 = Assalariado("André Hugo", 000000, 2000000);
    Comissionado func2 = Comissionado("José da Caximbinha", 000001, 500000, 0.3);
    Horista func3 = Horista("Ana", 000002, 200, 100);

    sistg.setFuncionario(&func1);
    sistg.setFuncionario(&func2);
    sistg.setFuncionario(&func3);

    cout << "O salario do func1: "<< sistg.consultaSalarioFuncionario("André Hugo") << endl;
    cout << "O salario do func2: " << sistg.consultaSalarioFuncionario("José da Caximbinha") << endl;
    cout << "O salario do func3: " << sistg.consultaSalarioFuncionario("Ana") << endl;

    cout << "A folha salarial é: " << sistg.consultaValorTotalFolha() << " reais." << endl;


    return 0;
}