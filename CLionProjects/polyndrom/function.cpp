//
// Created by Екатерина on 20/12/2019.
//
#include <iostream>
#include "lib.h"
bool isPolyndrom(std::string str) {
    int length = str.length();
    for (int i = 0; i < length/2; ++i) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }
    return true;
    }