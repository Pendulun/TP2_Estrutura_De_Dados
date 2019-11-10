#include "Lectures.hpp"
#include <iostream>
#include <string>
int main() {
  int T,P,x;
  while(scanf("%d %d %d", &T, &P, &x) != EOF){
    Agenda::Lectures* lectures_agenda = new Agenda::Lectures(P,x);
    lectures_agenda->addPlanets();
    lectures_agenda->printOrderedPlanets(T);
    delete lectures_agenda;
  }
  return 0;
}