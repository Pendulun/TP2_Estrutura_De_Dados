#include "Planet.hpp"

namespace Agenda{
	
	Planet::Planet(std::string new_name, int new_visit_time){
		this->name = new_name;
		this->visit_time = new_visit_time;
	}

	Planet::Planet(){}
	
	int Planet::getVisitTime(){
		return this->visit_time;
	}

	void Planet::setVisitTime(int new_visit_time){
		this->visit_time = new_visit_time;
	}
	
	std::string Planet::getName(){
		return this->name;
	}

	void Planet::setName(std::string new_name){
		this->name = new_name;
	}
	
}