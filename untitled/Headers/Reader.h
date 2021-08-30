//
// Created by mauro on 8/29/21.
//

#ifndef UNTITLED_READER_H
#define UNTITLED_READER_H
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
#include <fstream>
using std::ifstream;
#include <cstdlib> // for exit function
#include <list>
#include "Memory.h"
#include <bits/stdc++.h>

class Reader {
public:
    std::ifstream indata;
    int num;
    std::list<char*> list;
    Memory * memory;


    Reader(Memory *memo);
    void read(std::string file);
    void extract_vals(std::string str[], int length);
};


#endif //UNTITLED_READER_H
