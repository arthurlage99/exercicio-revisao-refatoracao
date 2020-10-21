#include "Empregado.hpp"


void Empregado::setSalarioHora(double valor){
    salarioHora = valor;
}

double Empregado::pagamentoMes(double horas){

    double totalDeHoras = horas;

      if (horas > Tempo) {
        double horaExtra = horas - Tempo;

        totalDeHoras += horaExtra / Variavel;
      }
	  return totalDeHoras * salarioHora;
}
