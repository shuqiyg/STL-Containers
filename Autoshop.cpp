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
#include <iostream>
#include <initializer_list>
#include "Autoshop.h"


namespace sdds {
	Autoshop& Autoshop::operator += (Vehicle* theVehicle) {
		m_vehicles.push_back(theVehicle);
		return *this;
	}
	void Autoshop::display(std::ostream& out) {
		out << "--------------------------------" << std::endl << "| Cars in the autoshop!        |" << std::endl << "--------------------------------" << std::endl;
		std::vector<Vehicle*>::iterator iter;
		for (iter = m_vehicles.begin(); iter != m_vehicles.end(); iter++) {
			(*iter)->display(out);
			out << std::endl;
		}
		out << "--------------------------------" << std::endl;
	}
	Autoshop::~Autoshop() {
		std::vector<Vehicle*>::iterator iter;
		for (iter = m_vehicles.begin(); iter != m_vehicles.end(); iter++) {
			delete (*iter);
		}
	}
	
}