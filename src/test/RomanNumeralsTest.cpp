#include "RomanNumerals.h"

#include "gtest/gtest.h"

TEST(RomanNumeralsTest, OnlyIs) {
	RomanNumerals roman;
	EXPECT_EQ(roman.convert(1), "I");
}