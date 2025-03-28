#include "gmock/gmock.h"

using namespace testing;

TEST(TS, TC1) {
	int x = 10;
	EXPECT_THAT(x, Eq(10));
}

int main() {
	InitGoogleMock();
	return RUN_ALL_TESTS();
}