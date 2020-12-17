//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_WRITECONSOLE_H
#define DESIGN_WRITECONSOLE_H
#include <iostream>
#include "iwrite.h"

class WriteConsole: public IWrite{
public:
    /*virtual*/ void write(std::string);

};

inline void WriteConsole::write(std::string str) {
    std::cout<<str<<std::endl;
}

#endif //DESIGN_WRITECONSOLE_H
