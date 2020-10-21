#include <string>
#include "Engenheiro.hpp"

void Engenheiro::setNome(std::string texto){
    nome = texto;
}

std::string Engenheiro::getNome(){
    return nome;
}

void Engenheiro::setProjetos(int numero){
    projetos = numero;
}

int Engenheiro::getProjetos(){
    return projetos;
}
