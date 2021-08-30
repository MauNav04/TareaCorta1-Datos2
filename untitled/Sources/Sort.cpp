//
// Created by mauro on 8/29/21.
//

#include <iostream>
#include "../Headers/Sort.h"

void Sort::swapping(int &a, int &b) {         //swap the content of a and b
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Sort::display(int *array, int size) {
    for(int i = 0; i<size; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

int* Sort::selectionSort(int *array, int size) {
    int i, j, imin;
    for(i = 0; i<size-1; i++) {
        imin = i;   //get index of minimum data
        for(j = i+1; j<size; j++)
            if(array[j] < array[imin])
                imin = j;
        //placing in correct position
        swapping(array[i], array[imin]);
    }

    return array;
}