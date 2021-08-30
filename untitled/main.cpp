#include <iostream>
#include "Headers/Memory.h"
#include "Headers/Reader.h"
#include "Headers/Sort.h"

int main() {
    Memory * memory = new Memory();

    Reader * reader = new Reader(memory);
    reader->read("/home/mauro/Documents/Documentos de la U/Semestre2-2021/Datos2/untitled/hola.txt");

    Sort * sorter = new Sort();
    int* array = sorter->selectionSort(memory->firstCell,memory->length);
    sorter->display(array,memory->length);

    memory->deletion();

    return 0;
}
