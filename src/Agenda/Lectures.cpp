#include "Lectures.hpp"

namespace Agenda{

	void Lectures::addPlanet(std::string planet_name, int t){
		Planet new_planet = Planet(planet_name,t);
		this->visiting_planets.pushback(new_planet);
	}

	void Lectures::printOrderedPlanets(){
		Lectures::orderByTime();
		Lectures::orderByName();
		Lectures::printInterval();
	}

	void Lectures::orderByTime(){

	}

	void Lectures::orderByName(){

	}

	void Lectures::printInterval(){
		
	}

}