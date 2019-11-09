#include "Lectures.hpp"

namespace Agenda{

	Lectures::Lectures(int numPlanets){
		this->numPlanets = numPlanets;
	}

	Lectures::~Lectures(int numPlanets){
		for(int planet=0;planet<numPlanets;planet++){
			delete this->visiting_planets[planet];
		}
		delete[] this->visiting_planets;
	}

	void Lectures::addPlanet(std::string planet_name, int t, int position){
		Planet new_planet = Planet(planet_name,t);
		this->visiting_planets[position] = new_planet;
	}

	void Lectures::printOrderedPlanets(){
		Lectures::orderByTime();
		Lectures::orderByName();
		Lectures::printInterval();
	}

	void Lectures::orderByTime(){
		Ordering::MergeSort orderTime = new MergeSort();
		orderTime.mergeSort(this->visiting_planets,0,this->numPlanets)
	}

	void Lectures::orderByName(){

	}

	void Lectures::printInterval(){
		
	}

}