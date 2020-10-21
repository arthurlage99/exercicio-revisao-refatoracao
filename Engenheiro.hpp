#ifndef ENGENHEIRO_HPP
#define ENGENHERIO_HPP

#include "Empregado.hpp"


class Engenheiro : public Empregado {

  private:
    int projetos;
    std::string nome;
  public:

	void setProjetos(int numero);
    void setNome(std::string texto);
    int getProjetos();
    std::string getNome();

};

#endif
