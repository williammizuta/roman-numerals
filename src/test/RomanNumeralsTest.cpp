#include "RomanNumerals.h"

#include "gtest/gtest.h"

TEST(RomanNumeralsTest, OnlyIs) {
	EXPECT_EQ(RomanNumerals::convert(1), "I");
	EXPECT_EQ(RomanNumerals::convert(2), "II");
	EXPECT_EQ(RomanNumerals::convert(3), "III");
}