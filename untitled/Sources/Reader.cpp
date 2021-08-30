//
// Created by mauro on 8/29/21.
//

#include "../Headers/Reader.h"

Reader::Reader(Memory * memo) {
    this->memory = memo;
}

void Reader::read(std::string file) {
    Reader::indata.open(file);
    if(!this->indata){
        std::cerr << "Error: file couldn't be opened" << endl;
        exit(1);
    }
    this->indata >> num;
    while(!this->indata.eof()){
        this->memory->add_value(num);
        //this->list.push_back(num);
        //std::cout << "The next number is " << num << endl;
        this->indata >> num;
    }
    this->indata.close();
    std::cout << "End-of-file reached.." << endl;
}
