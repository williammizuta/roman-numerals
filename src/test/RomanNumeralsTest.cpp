#include "RomanNumerals.h"

#include "gtest/gtest.h"

TEST(RomanNumeralsTest, OnlyIs) {
	RomanNumerals roman;
	EXPECT_EQ(roman.convert(1), "I");
	EXPECT_EQ(roman.convert(2), "II");
	EXPECT_EQ(roman.convert(3), "III");
}