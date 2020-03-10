#include "SistemaGerenciaFolha.hpp"

SistemaGerenciaFolha::SistemaGerenciaFolha(double orcamento)
{
    this->orcamento = orcamento;
    this->indice = 0;
}

void SistemaGerenciaFolha::setFuncionario(Funcionario *funcionario)
{
    funcionarios[indice] = funcionario;
    indice++;
}

Funcionario* SistemaGerenciaFolha::getFuncionario(int indice)
{
    return funcionarios[indice];
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome)
{
    try
    {
        for(int i = 0; i < indice; i++)
        {
            if(funcionarios[i]->getNome() == nome)
            return funcionarios[i]->calcularSalario();
        }
        throw FuncionarioNaoExisteException();
    }
    catch(FuncionarioNaoExisteException exc)
    {
        exc = FuncionarioNaoExisteException();
    }
}

double SistemaGerenciaFolha::consultaValorTotalFolha()
{
    double soma = 0;
    try{
        for(int i = 0; i < indice; i++)
        {
            soma += funcionarios[i]->calcularSalario();
        }
        if(soma > orcamento)
        {
            throw OrcamentoEstouradoException();
        }
        return soma;
    }
    catch(OrcamentoEstouradoException exc)
    {
        exc = OrcamentoEstouradoException();
    }

}