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
#include <string>
#include <iomanip>
#include "Car.h"

namespace sdds {
	Car::Car(std::istream& in) {
		std::string str;
		getline(in, str);
		if (str != "") {
			//tag
			size_t first_comma = str.find(",");
			std::string tag_str;
			tag_str = str.substr(0, first_comma);
			size_t start = tag_str.find_first_not_of(' ');
			size_t end = tag_str.find_last_not_of(' ');
			tag_str = tag_str.substr(start, end - start + 1);
			tag = tag_str[0];
			//maker
			size_t make_pos = first_comma + 1;
			size_t second_comma = str.find(',', make_pos);
			maker = str.substr(make_pos, second_comma - make_pos);
			start = maker.find_first_not_of(' ');
			end = maker.find_last_not_of(' ');
			maker = maker.substr(start, end - start + 1);
			//condition
			size_t condi_pos = second_comma + 1;
			size_t third_comma = str.find(',', condi_pos);
			std::string cd_str;
			cd_str = str.substr(condi_pos, third_comma - condi_pos);
			if (cd_str.find_first_not_of(' ') == std::string::npos) {
				car_condition = 'n';
			}else{
				start = cd_str.find_first_not_of(' ');
				end = cd_str.find_last_not_of(' ');
				cd_str = cd_str.substr(start, end - start + 1);
				car_condition = cd_str[0];
			}
			if (car_condition != 'n' && car_condition != 'u' && car_condition != 'b') {
				valid = false;
			};
			//top_speed
			size_t ts_pos = third_comma + 1;
			size_t fourth_comma = str.find(',', ts_pos);
			std::string ts_str;
			if(fourth_comma == size_t(-1)){
				ts_str = str.substr(ts_pos);
			}
			else {
				ts_str = str.substr(ts_pos, fourth_comma - ts_pos);
			}
			start = ts_str.find_first_not_of(' ');
			end = ts_str.find_last_not_of(' ');
			ts_str = ts_str.substr(start, end - start + 1);
			char* pEnd;
			int result = std::strtol(ts_str.c_str(), &pEnd, 10);
			if (*pEnd == 0) {
				top_speed = result;
			}
			else {
				valid = false;
			};
			
			if (!valid) throw "Invalid record!";
			in.clear();
			in.seekg(std::ios_base::beg);
		}		
	}
	std::string Car::condition() const{
		switch(car_condition) {
		case 'n':
			return "new";
		case 'u':
			return "used";
		case 'b':
			return "broken";
		default:
			return "";
		}
	}
	double Car::topSpeed() const {
		return top_speed;
	}
	void Car::display(std::ostream& out) const{
		out << "| " << std::setw(10) << std::right << maker << " | " << std::setw(6) << std::left << this->condition() << " | " << std::setw(6) << std::fixed << std::setprecision(2) << this->topSpeed() << " |";
		if(this->tag == 'r' || this->tag == 'R') out << "*";
	}
}