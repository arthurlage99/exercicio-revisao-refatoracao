#include <string>
#include "Vendedor.hpp"


void Vendedor::setNome(std::string _Nome){
    nome = _Nome;
}

std::string Vendedor::getNome(){
    return nome;
}

void Vendedor::setQuotaMensalVendas(double _Valor){
    quotaMensalVendas = _Valor;
}

double Vendedor::quotaTotalAnual(){
	  return quotaMensalVendas * Meses;
}
