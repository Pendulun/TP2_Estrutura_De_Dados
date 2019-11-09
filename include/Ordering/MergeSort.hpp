#ifndef MERGESORT_H
#define MERGESORT_H
#include "Planet.hpp"
namespace Ordering{
	class MergeSort{
	public:
		void mergeSort(Planet *visiting_planets, int left_index, int right_index);
	private:
		void merge(Planet *visiting_planets, int left_index, int middle_index, int right_index);
	};
}

#endif