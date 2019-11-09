#ifndef LECTURES_H
#define LECTURES_H
#include <vector>
#include <string>
#include "Planet.hpp"
#include "MergeSort.hpp"
#include "RadixSort.hpp"
namespace Agenda{
	class Lectures{
	public:
		void addSinglePlanet(std::string planet_name, int t,int position);
		void addPlanets();
		void printOrderedPlanets(int maxTime);
		Lectures(int numPlanets,int planetNameSize);
		~Lectures();
	private:
		int numPlanets; 
		int planetNameSize;
		Planet* visiting_planets[numPlanets];
		void orderByTime();
		void orderByName(int left_index,int right_index);
		void printInterval(int left_index,int right_index);
	};
}

#endif