#include <iostream>
using namespace std;
#include "function.h"

int main() {
    int n;
    int number;
    cin >> n;
    int sum = 0;
    int *p_a = new int[n];
    if (n < 0)
        return 1;
    else {
        int array[n];

        for (int i = 0; i < n; i++) {
            cin >> number;
            p_a[i] = number;
        }

    }
    cout << " Array Sum = " << sumArray(p_a,n);
    delete []p_a;
}