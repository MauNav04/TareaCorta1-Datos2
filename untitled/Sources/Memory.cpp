//
// Created by mauro on 8/29/21.
//

#include <iostream>
#include <cstdlib>
#include "../Headers/Memory.h"

using namespace std;

Memory::Memory() {
    Memory::length = 0;
    Memory::MAX = 50;
    Memory::firstCell = (int*) malloc(3000*sizeof(int));
    Memory::current_Ptr = firstCell;
    Memory::lastPage = NULL;
}

int *Memory::get_current() {
    return Memory::current_Ptr;
}

int Memory::get_length() {
    return Memory::length;
}

void Memory::add_value(int value) {
    Memory::firstCell[Memory::length] = value;
    Memory::length = Memory::length +1;
    //Memory::current_Ptr =
}

int *Memory::show_values() {
    for(int i = 0; i<=Memory::length-1; i++){
        cout << "Value at position " << i << " is "<< *(Memory::firstCell+i) << endl;
    }
}

void Memory::deletion() {
    free(Memory::firstCell);
}