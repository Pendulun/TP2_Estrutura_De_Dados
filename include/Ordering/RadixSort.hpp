#ifndef RADIXSORT_H
#define RADIXSORT_H
#include "Planet.hpp"
namespace Ordering{
	class RadixSort{
		public:
			void countSort(Agenda::Planeta* &planetsArray, int numPlanets, int charIndex);
			void radixSort(Agenda::Planeta* &planetsArray, int numPlanets,int planetNameSize);
	};
}
#endif