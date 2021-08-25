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
#include <sstream> 
#include <string>
#include "Racecar.h"

namespace sdds {	
	Racecar::Racecar(std::istream& in) : Car(in) {
		std::string b_str;
		getline(in, b_str);
		if(b_str != ""){ 
			unsigned last_comma = b_str.find_last_of(',');
			m_booster = std::stod(b_str.substr(last_comma + 1));
		}	
	}
	void Racecar::display(std::ostream& out) const {
		Car::display(out);
	}
	double Racecar::topSpeed() const {
		return Car::topSpeed() * (1 + m_booster);
	}
}