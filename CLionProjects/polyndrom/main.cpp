#include <iostream>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include "lib.h"
using namespace std;

int main() {

    std::string word;

    fstream file;  //making an object of class fsteam

    file.open("/Users/ekaterina/CLionProjects/polyndrom/file.txt"); // file is open

    if (!file) {
        throw std::invalid_argument( "File is not open" );
    }
    std::getline(file, word);

    for(file >> word; !file.eof(); file >> word) {
        cout << word << (isPolyndrom(word) ? " is_Polyndrom!" : " is_not_Polyndrom") << endl;
    }
    return 0;
}