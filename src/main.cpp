#include "Lectures.hpp"
#include <iostream>
#include <string>
int main() {
  int T,P,x;
  while(scanf("%d %d %d", &T, &P, &x) != EOF){
    Lectures lectures_agenda = new Lectures(P,x);
    lectures_agenda.addPlanets();
    lectures_agenda.printOrderedPlanets(T);
  }
  delete lectures_agenda;
  return 0;
}