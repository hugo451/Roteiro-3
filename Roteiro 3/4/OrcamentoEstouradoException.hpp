#ifndef ORCAMENTOESTOURADOEXCEPTION_HPP
#define ORCAMENTOESTOURADOEXCEPTION_HPP
#include <iostream>
#include <exception>

using namespace std;
class OrcamentoEstouradoException : public exception
{
    public:
        OrcamentoEstouradoException();
};
#endif