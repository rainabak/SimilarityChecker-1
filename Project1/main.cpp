#include <iostream>
#include <gmock/gmock.h>
#include "stringLengthAlphabet.cpp"
#include <vector>
#include <string>

using namespace testing;

TEST(StringLengthTest, CheckSameLength) {
    StringLengthAlphabet app;
    std::vector<std::vector<std::string>> wordVec = { {"ASD", "DSA"}, {"A", "BB"}, {"AAABB", "BAA"} , {"AA", "AAE"} };
    std::vector<int>wordLenVec = { 60, 0, 20, 30 };
    for (int i = 0; i < wordVec.size(); i++) {
        int actual = app.getScore(wordVec[i]);
        EXPECT_EQ(wordLenVec[i], actual);
    }
}

TEST(StringLengthTest, ���ĺ��˻�) {
	StringLengthAlphabet app;
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