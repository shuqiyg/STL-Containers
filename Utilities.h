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
#ifndef UTILITIES_H_
#define UTILITIES_H_
#include <fstream>
#include "Car.h"
#include "Racecar.h"

namespace sdds {
	Vehicle* createInstance(std::istream& in);
}
#endif