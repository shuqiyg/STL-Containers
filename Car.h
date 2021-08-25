/* Workshop 6 - STL Containers
   Name: Shuqi Yang
   Std ID: 132162207
   Email: syang136@myseneca.ca
   Date: 06-30-2021
   -------------------------------------------------------
   I have done all the coding by myself and only copied the
   code that my professor provided to complete my workshops
   and assignments.
 */
#ifndef CAR_H_
#define CAR_H_
#include <sstream>
#include "Vehicle.h"
namespace sdds {
	class Car: public Vehicle {
		char tag{};
		std::string maker{};
		char car_condition{};
		int top_speed{};
		bool valid = true;
	public:
		Car(std::istream&);
		std::string condition() const;
		double topSpeed() const;
		void display(std::ostream& out) const;
	};
}


#endif
