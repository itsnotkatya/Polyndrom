//
// Created by Екатерина on 23/11/2019.
//

#include "gtest/gtest.h"
#include "function.h"

TEST(sumArray, emptyArray) {
int *p_b = new int[6];
for (int i = 0; i < 6; i++) {
    *(p_b + i) = 0;
}
    EXPECT_EQ(0,sumArray(p_b,6));
}

TEST(sumArray, positiveSum) {
    int *p_b = new int[6];
    for (int i = 0; i < 6; i++) {
        *(p_b + i) = i + 1;
    }
    EXPECT_EQ(21,sumArray(p_b, 6));
}

TEST(sumArray, negativeSum) {
    int *p_b = new int[6];
    for (int i = 0; i < 6; i++) {
        *(p_b + i) = -i - 1;
    }
    EXPECT_EQ(-21,sumArray(p_b, 6));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}