#ifndef FUNCIONARIONAOEXISTEEXCEPTION_HPP
#define FUNCIONARIONAOEXISTEEXCEPTION_HPP
#include <iostream>
#include <exception>

using namespace std;
class FuncionarioNaoExisteException : public exception
{
    public:
        FuncionarioNaoExisteException();
};
#endif