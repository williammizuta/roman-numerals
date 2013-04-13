#include "RomanNumerals.h"

RomanNumerals::RomanNumerals() {

}

RomanNumerals::~RomanNumerals() {

}

std::string RomanNumerals::convert(int number) {
	std::string roman;
	for (int i = 0; i < number; ++i) {
		roman.append("I");
	}
	return roman;
}