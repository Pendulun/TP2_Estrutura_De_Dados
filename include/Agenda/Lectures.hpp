#ifndef LECTURES_H
#define LECTURES_H
#include <string>
#include <iostream>
#include "Planet.hpp"
#include "RadixSort.hpp"
#include "MergeSort.hpp"
namespace Agenda{
	class Lectures{
	public:
		void addSinglePlanet(std::string planet_name, int t,int position);
		void addPlanets();
		void printOrderedPlanets(int maxTime);
		Lectures(int numPlanets,int planetNameSize);
		~Lectures();
	private:
		int numPlanets=0; 
		int planetNameSize=0;
		Planet* visiting_planets=nullptr;
		void orderByTime();
		void orderByName(int left_index,int right_index);
		void printInterval(int left_index,int right_index,int month);
	};
}

#endif