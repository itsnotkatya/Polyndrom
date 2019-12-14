//
// Created by Екатерина on 08/11/2019.
//
#include <iostream>
#include "function.h"
using namespace std;


int sumArray(int *p_a, unsigned int n) {
    int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += p_a[i];
        }
         return sum;
}

