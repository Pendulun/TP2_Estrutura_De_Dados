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

	void Lectures::addSinglePlanet(std::string planet_name, int t, int position){
		Planet new_planet = Planet(planet_name,t);
		this->visiting_planets[position] = new_planet;
	}

	void Lectures::addPlanets(std::string planet_name, int t, int position){
		for (int planetCount = 0; planetCount<this->numPlanets; planetCount++){
    		int t;
    		std::string planet_name;
    		std::cin>>t>>planet_name;
    		this->addSinglePlanet(planet_name,t,planet);
  		}
	}

	void Lectures::printOrderedPlanets(int maxTime){
		Lectures::orderByTime();
		int left_index=0;
		int right_index=0;
		int timeSum=0;
		int month=1;
		//Sum the visiting time of each planet until maxTime be excceeded
		//Sort by name a given interval of planets so it can print the planets
		//that will be together at a given month
		for(int planet=0;planet<this->numPlanets;planet++){
			timeSum+=this->visiting_planets[planet].getVisitTime();
			if(timeSum>maxTime){
				Lectures::orderByName(left_index,planet-1);
				Lectures::printInterval(left_index,planet-1,month);
				left_index=planet;
				timeSum=0;
				month++;
			}
		}
		//If it didn't print till the end
		if(left_index!=numPlanets-1){
			Lectures::printInterval(left_index,numPlanets-1,month);
		}
	}

	void Lectures::orderByTime(){
		Ordering::MergeSort orderTime = new MergeSort();
		orderTime.mergeSort(this->visiting_planets,0,this->numPlanets-1)
	}

	void Lectures::orderByName(int left_index,int right_index){

	}

	void Lectures::printInterval(int left_index,int right_index,int month){
		for(int planet=left_index;planet<=right_index;planet++){
			std::cout<<month+" "<<this->visiting_planets[planet].getName()+" "<<this->visiting_planets[planet].getVisitingTime()<<std::endl;
		}
	}

}