#ifndef SISTEMAGERENCIAFOLHA_HPP
#define SISTEMAGERENCIAFOLHA_HPP
#include "Funcionario.hpp"
#include "FuncionarioNaoExisteException.hpp"
#include "OrcamentoEstouradoException.hpp"
#include <vector>

using namespace std;
class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha(double orcamento);

        void setFuncionario(Funcionario *funcionario);
        Funcionario* getFuncionario(int indice);

        double consultaSalarioFuncionario(string nome);
        double consultaValorTotalFolha();
    protected:

    private:
        double orcamento;
        int indice;
        Funcionario* funcionarios[100];
};

#endif