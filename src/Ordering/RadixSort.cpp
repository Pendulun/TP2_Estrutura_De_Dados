#include "RadixSort.hpp"

namespace Ordering{
	void RadixSort::countSort(Planeta* &planetsArray, int numPlanets, int charIndex){
		Agenda::Planet* sortedPlanets[numPlanets];
	
		int *countingArray = new int[257];
    	for (int index = 0; index <257; index++){
     	   countingArray[index] = 0;
    	}
	
   	 	for (int planet = 0; planet <numPlanetas; planet++){   
    	    countingArray[(int)(unsigned char)planetsArray[planet]->getName()[charIndex] + 1]++;
    	}

    	for (int index = 1; index <257; index++){
    	    countingArray[index] += countingArray[index - 1];
    	}

    	for (int planet = numPlanetas - 1; planet >= 0; planet--){
    	    sortedPlanets[countingArray[(int)(unsigned char)planetsArray[planet]->getName()[charIndex] + 1] - 1] = planetsArray[planet];
    	    countingArray[(int)(unsigned char)planetsArray[planet]->getName()[charIndex] + 1]--;
    	}
	
		//Copies the sortedPlanets to the original array
    	for (int planet = 0; planet < numPlanets; planet++){
    	    planetsArray[planet] = sortedPlanets[planet];
    	}
    	delete[] countingArray;
	}

	void RadixSort::radixSort(Agenda::Planeta* &planetsArray, int numPlanets,int planetNameSize){
		for (int charIndex = planetNameSize; charIndex > 0; charIndex--){
        	countSort(planetsArray, numPlanets, charIndex - 1);
    	}
	}
}