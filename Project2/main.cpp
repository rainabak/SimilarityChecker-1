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

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}