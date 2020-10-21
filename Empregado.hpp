#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

const int Tempo = 8;
const int Variavel = 2;

class Empregado {

  private:

    double salarioHora;

  public:
    void setNome(std::string texto);
    void setSalarioHora(double valor);

    std::string getNome();

    double pagamentoMes(double horasTrabalhadas);
};

#endif
