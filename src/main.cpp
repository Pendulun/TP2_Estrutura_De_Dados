#include "Planet.hpp"
#include <string>
int main() {
  int T,P,x;
  //Criar instância da agenda
  std::cin>>T>>P>>x;
  for (int contador = 0; contador<P; contador++){
    int t;
    std::string planet_name;
    std::cin>>t>>planet_name;
    Planet novo_planeta = new Planet(planet_name,t);
    // Adicionar ao vetor de planetas da agenda
  }
  
  bancadaLab->destruirBancada();
  return 0;
}