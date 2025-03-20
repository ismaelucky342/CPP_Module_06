#include "../includes/Serial.hpp"

Serial::Serial() {
	std::cout << GREEN "[Build] constructor called" RESET << std::endl;
}

Serial::Serial(const Serial &src) {
	std::cout << GREEN "[Build] constructor called" RESET<< std::endl;
	*this = src;
}

Serial::~Serial() {
	std::cout << RED "[Destroyed] destructor called" RESET<< std::endl;

}

uintptr_t Serial::serial(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serial::deserial(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

Serial & Serial::operator=(const Serial &src) {
	(void)src;
	std::cout << GREEN "Assignament called" RESET << std::endl;
	return *this;
}
