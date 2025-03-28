#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <gmock/gmock.h>
#include "StringLenthAlpha.cpp"

using namespace testing;

TEST(StringLengthTest, ¾ËÆÄºª°Ë»ç) {
	StringLenthAlpha app;
	std::vector<std::vector<std::string>> wordVec = { {"ASD", "DSA"}, {"A", "BB"}, {"AAABB", "BAA"}, {"AA", "AAE"} };
	std::vector<int>wordLenVec = { 40, 0, 40, 40 };
	for (int i = 0; i < wordVec.size(); i++) {
		int actual = app.getAlphabetScore(wordVec[i][0], wordVec[i][1]);
		EXPECT_EQ(wordLenVec[i], actual);
	}
}

int main() {
    InitGoogleMock();
    return RUN_ALL_TESTS();
}
