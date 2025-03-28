#include "gmock/gmock.h"

using namespace testing;

TEST(TS, TC1) {
	int x = 10;
	EXPECT_THAT(x, Eq(10));
}

TEST(TS, TC2) {
	int x = 10;
	EXPECT_THAT(x, Ne(100));
}

TEST(TS, TC3) {
	int x = 20;
	EXPECT_THAT(x, Gt(25)) << "25���� Ŀ�� ��.";
	EXPECT_THAT(x, Lt(35)) << "35���� �۾ƾ� ��.";
	EXPECT_THAT(x, Ne(31)) << "31�̸� �ȵ�.";
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}