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
#include "Utilities.h"
namespace sdds {
	Vehicle* createInstance(std::istream& in) {
		std::string car;
		getline(in, car);
		std::istringstream buf(car);
		if (car != "") {
			size_t non_space = car.find_first_not_of(' ');
			char first_non_blank = (car.substr(non_space))[0];
			if (first_non_blank == 'c' || first_non_blank == 'C') {
				Vehicle* new_car = new Car(buf);
				return new_car;
			}
			else if (first_non_blank == 'R' || first_non_blank == 'r') {
				Vehicle* new_racecar = new Racecar(buf);
				return new_racecar;
			}
			else {
				std::string excp = "Unrecognized record type: [";
				excp += (first_non_blank);
				excp += "]";
				throw excp;
			}
		}
		return nullptr;
	};
}
