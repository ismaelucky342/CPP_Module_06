#include "../includes/Datas.hpp"

Data::Data(){
	std::cout << GREEN "[Build] Data class" RESET << std::endl;
}

Data::~Data() {
	std::cout << RED "[Destroyed] Data class" RESET<< std::endl;
}

Data::Data(std::string name) : _name(name){
	std::cout << GREEN "[Build] Data class" RESET << std::endl;
}


Data::Data(const Data & data) {
	std::cout << BLUE "[Copy] Copy Data class called" RESET << std::endl;
	*this = data;
}

std::string Data::getName() const {
	return (this->_name);
}

Data &Data::operator=(const Data & data) {
	std::cout << GREEN "operator assignament called" RESET << std::endl;
	if (&data != this)
		return *this;
	this->_name = data.getName();
	return *this;
}
