#include "RomanNumerals.h"

#include "gtest/gtest.h"

TEST(RomanNumeralsTest, OnlyIs) {
	EXPECT_EQ("I", RomanNumerals::convert(1));
	EXPECT_EQ("II", RomanNumerals::convert(2));
	EXPECT_EQ("III", RomanNumerals::convert(3));
}