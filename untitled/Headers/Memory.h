//
// Created by mauro on 8/29/21.
//

#ifndef UNTITLED_MEMORY_H
#define UNTITLED_MEMORY_H


class Memory {
public:
    int MAX;
    int* current_Ptr;
    int* firstCell;
    int* lastPage;
    int length;

    Memory();
    void add_value(int value);
    int* show_values();
    void deletion();
    int get_length();
    int* get_current();
};


#endif //UNTITLED_MEMORY_H
