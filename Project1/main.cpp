#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <gmock/gmock.h>
#include "split_and_sum.cpp"

using namespace testing;

int main() {
    InitGoogleMock();
    return RUN_ALL_TESTS();
}
