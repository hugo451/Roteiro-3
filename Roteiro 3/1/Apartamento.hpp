#ifndef APARTAMENTO_HPP
#define APARTAMENTO_HPP
#include "Imovel.hpp"

class Apartamento : public Imovel
{
private:

    string posicao;
    int numQuartos;
    double valorCondomino;
    int vagasGaragem;
    double area;
    int andar;

public:
    Apartamento();
    string getposicao();
    int getnumQuartos();
    double getvalorCondomino();
    int getvagasGaragem();
    double getarea();
    int getAndar();
    void setposicao(string posicao);
    void setnumQuartos(int numQuartos);
    void setvalorCondomino(double valorCondomino);
    void setvagasGaragem(int vagasGaragem);
    void setarea(double area);
    void setAndar(int andar);
    void caracteristicas();

};

#endif