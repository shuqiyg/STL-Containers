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
#ifndef AUTOSHOP_H_
#define AUTOSHOP_H_
#include <vector>
#include <list>
#include "Vehicle.h"

namespace sdds {
	class Autoshop {
		std::vector<Vehicle*> m_vehicles;
	public:
		Autoshop& operator += (Vehicle* theVehicle);
		void display(std::ostream& out);
		~Autoshop();

		template<typename T>
		void select(T test, std::list<const Vehicle*>& vehicles) {
			std::vector<Vehicle*>::iterator iter;
			for (iter = m_vehicles.begin(); iter != m_vehicles.end(); iter++) {
				if (test(*iter)) {
					vehicles.push_back(*iter);
				}
			}
		};
	};  
}

#endif // !AUTOSHOP_H_

