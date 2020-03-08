#ifndef ICONTA_HPP
#define ICONTA_HPP
class IConta
{
private:
    /* data */
public:
    IConta();
    virtual void sacar(double valor);
    virtual void depositar(double valor);
};
#endif