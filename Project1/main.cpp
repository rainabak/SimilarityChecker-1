#include <iostream>
#include <gmock/gmock.h>
#include "stringLenAlpha.cpp"
#include <vector>
#include <string>

using namespace testing;

TEST(StringLengthTest, CheckSameLength) {
    StringLength sl;
    std::vector<std::vector<std::string>> wordVec = { {"ASD", "DSA"}, {"A", "BB"}, {"AAABB", "BAA"}, {"AA", "AAE"} };
    std::vector<int>wordLenVec = { 60, 0, 2, 1 };
	for (int i = 0; i < wordVec.size(); i++) {
		int actual = sl.getScore(wordVec[i]);
		EXPECT_EQ(wordLenVec[i], actual);
	}
}

int main() {
    InitGoogleMock();
    return RUN_ALL_TESTS();
}
