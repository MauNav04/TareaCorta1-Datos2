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

    this->indata.seekg(0,std::ifstream::end);
    int length = this->indata.tellg();
    this->indata.seekg(0, std::ifstream::beg);

    //if(length > 250){}

    char * buffer = new char[length];

    this->indata.read(buffer,length);

   /* this->indata >> num;
    while(!this->indata.eof()){
        std::cout << "El numero que se agregarà a memoria es: " << num << std::endl;
        this->memory->add_value(num);
        //this->list.push_back(num);
        //std::cout << "The next number is " << num << endl;
        this->indata >> num;
    }*/
    this->indata.close();
    std::cout << "End-of-file reached.." << endl;

    std::cout << "BUffer: " << buffer;

    std::string str[length];
    for(int i =0; i<length; i++){
        str[i] = buffer[i];
    }

    this->extract_vals(str, length);
}

void Reader::extract_vals(std::string str[], int length) {
    std::basic_string<char> ch;
    for(int i =0; i<length; i++){
        if(str[i].compare(",") == 0 || i == length-1){
            int num;
            std::stringstream ss;
            ss<<ch;
            ss>>num;

            std::cout << "The number that will be added is: " << num << std::endl;

            memory->add_value(num);
            ch.clear();
        }
        else{
            ch = ch.append(str[i]);
        }
    }
}
