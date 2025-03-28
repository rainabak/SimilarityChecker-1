#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <gmock/gmock.h>
#include "split_and_sum.cpp"

using namespace testing;

TEST(tcw, �ٴ��ϱ�) {
	SplitAndSum app;
	std::vector<int> input = { 10, 20, 30, 10, 20 };
	int expected = 90;
	int actual = app.getAllSum(input);
	EXPECT_EQ(expected, actual);
}

TEST(tcw, 3���ɰ���) {
	SplitAndSum app;
	std::string input = "10-20-30";
	int expected = 60;
	int actual = app.getResult(input);
	EXPECT_EQ(expected, actual);
}

TEST(tcw, �ڸ����ڿ����迭�����) {
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
