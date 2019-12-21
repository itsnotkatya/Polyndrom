//
// Created by Екатерина on 21/12/2019.
//

#include "gtest/gtest.h"
#include "lib.h"

TEST(isPolyndrom, emptyString) {
   std::string word = " ";
   isPolyndrom(word);
    EXPECT_EQ  (true, isPolyndrom(word));
}

TEST(isPolyndrom, isPolyndrom) {
    std::string word = "12321";
    isPolyndrom(word);
    EXPECT_EQ  (true, isPolyndrom(word));
}

TEST(isPolyndrom, notPoludrom) {
    std::string word = "12301";
    isPolyndrom(word);
    EXPECT_EQ  (false, isPolyndrom(word));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}