#ifndef LECTURES_H
#define LECTURES_H
#include <vector>
#include <string>
#include "Planet.hpp"
#include "MergeSort.hpp"
namespace Agenda{
	class Lectures{
	public:
		void addPlanet(std::string planet_name, int t,int position);
		void printOrderedPlanets();
		Lectures(int numPlanets);
		~Lectures();
	private:
		int numPlanets; 
		Planet* visiting_planets[numPlanets];
		void orderByTime();
		void orderByName();
		void printInterval();
	};
}

#endif