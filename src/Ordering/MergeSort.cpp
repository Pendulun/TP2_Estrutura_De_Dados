#include "MergeSort.hpp"

namespace Ordering{

	void MergeSort::mergeSort(std::vector<Planet*> &visiting_planets, int left_index, int right_index){
		int middle_index = (left_index+right_index)/2;
		if(left_index<right_index){
			MergeSort::mergeSort(std::vector<Planet*> &visiting_planets, left_index, middle_index);
			MergeSort::mergeSort(std::vector<Planet*> &visiting_planets, middle_index+1,right_index);
			MertgeSort::merge(visiting_planets,left_index,middle_index,right_index);
		}
	}

	void MergeSort::merge(std::vector<Planet*> visiting_planets, int left_index, int middle_index,
	 int right_index){
		//Auxiliar vector used to order the planets 
		std::vector<Planet*> ordered_vector;
		//Grow the ordered_vector size to the minimum needed
		ordered_vector.resize(right_index-left_index+1); 
		int planet_i,planet_j,planet_k;
		//Copies the left half of visiting_planets sequencially beggining at 0 index to the
		//ordered_vector
		for(planet_i=0;planet_i<=middle_index;planet_i++){
			ordered_vector[planet_i]=visiting_planets[planet_i];
		}
		//Copies the right half of visiting_planets sequencially beggining at the last index to the
		//ordered_vector decreasing the index
		for(planet_j=middle_index+1;planet_j<=right_index;planet_j++){
			ordered_vector[right_index-planet_j+middle_index+1]=visiting_planets[planet_j];
		}
		planet_i=left_index;
		planet_j=right_index;
		//Compares the elements at the right and left most index of the ordered_vector and
		//replace the actual visiting_planets element with this new element
		for(planet_k=left_index;planet_k<=right_index;planet_k++){
			if(ordered_vector[planet_i].getVisitTime()<=ordered_vector[planet_j].getVisitTime()){
				visiting_planets[planet_k]=ordered_vector[planet_i++];
			}else{
				visiting_planets[planet_k]=ordered_vector[planet_j--];
			}
		}
	}



}