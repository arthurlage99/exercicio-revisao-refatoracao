#ifndef VENDEDOR_HPP
#define VENDEDOR_HPP

#include"Empregado.hpp"

class Vendedor : public Empregado{
const int Meses = 12;

  private:
    double quotaMensalVendas;
    std::string nome;

  public:
    void setQuotaMensalVendas(double valor);

    std::string getNome();
	double quotaTotalAnual();
    void setNome(std::string texto);
};

#endif
