#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <gmock/gmock.h>
#include "split_and_sum.cpp"

using namespace testing;

TEST(tcw, 다더하기) {
	SplitAndSum app;
	std::vector<int> input = { 10, 20, 30, 10, 20 };
	int expected = 90;
	int actual = app.getAllSum(input);
	EXPECT_EQ(expected, actual);
}

TEST(tcw, 3개쪼개기) {
	SplitAndSum app;
	std::string input = "10-20-30";
	int expected = 60;
	int actual = app.getResult(input);
	EXPECT_EQ(expected, actual);
}

TEST(tcw, 자른문자열수배열만들기) {
    SplitAndSum app;
    std::vector<std::string> input = { "10", "20", "30", "10", "20" };
	std::vector<int> expected = { 10, 20, 30, 10, 20 };
    std::vector<int> actual = app.switchNumArray(input);
    EXPECT_EQ(expected, actual);
}

int main() {
    InitGoogleMock();
    return RUN_ALL_TESTS();
}
