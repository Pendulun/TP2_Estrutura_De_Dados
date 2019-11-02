#ifndef LECTURES_H
#define LECTURES_H
#include <vector>
#include <string>
#include "Planet.hpp"
namespace Agenda{
	class Lectures{
	public:
		void addPlanet(std::string planet_name, int t);
		void printOrderedPlanets();
		Lectures();
	private:
		std::vector<Planet*> visiting_planets; 
		void orderByTime();
		void orderByName();
		void printInterval();
	};
}

#endif