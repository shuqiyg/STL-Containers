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
#ifndef RACECAR_H_
#define RACECAR_H_
#include "Car.h"

namespace sdds {
	class Racecar : public Car {
		double m_booster{};
	public:
		Racecar(std::istream& in);
		void display(std::ostream& out) const;
		double topSpeed() const;
	};
}
#endif
