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

#ifndef SDDS_VEHICLE_H
#define SDDS_VEHICLE_H
#include <iostream>
#include <string>

namespace sdds
{
	class Vehicle
	{
	public:
		virtual double topSpeed() const = 0;
		virtual void display(std::ostream&) const = 0;
		virtual std::string condition() const = 0;
		virtual ~Vehicle() {};
	};
}

#endif
