#include "Lectures.hpp"
#include <string>
int main() {
  int T,P,x;
  Lectures lectures_agenda = new Lectures();
  std::cin>>T>>P>>x;
  for (int contador = 0; contador<P; contador++){
    int t;
    std::string planet_name;
    std::cin>>t>>planet_name;
    lectures_agenda->addPlanet(planet_name,t);
  }
  
  return 0;
}