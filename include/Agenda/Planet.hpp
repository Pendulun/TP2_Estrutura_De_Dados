#ifndef PLANET_H 
#define PLANET_H
#include <string>
namespace Agenda{
	class Planet{
		public:
			void setName(std::string name);
			std::string getName();
			void setVisitTime(int new_visit_time);
			int getVisitTime();
			Planet(std::string new_name, int new_visit_time);
		private:
			std::string name;
			int visit_time;
	};
}

#endif