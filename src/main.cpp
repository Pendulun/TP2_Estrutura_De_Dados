#include "Lectures.hpp"
#include <iostream>
#include <string>
int main() {
  int T,P,x;
  std::cin>>T>>P>>x;
  Lectures lectures_agenda = new Lectures(P,x);
  lectures_agenda.addPlanets();
  lectures_agenda.printOrderedPlanets(T);
  
  return 0;
}