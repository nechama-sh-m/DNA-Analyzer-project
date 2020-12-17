//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_READCONSOLE_H
#define DESIGN_READCONSOLE_H

#include <iostream>
#include "iread.h"
class ReadConsole: public IRead{
public:
    /*virtual*/ std::string read();


};

inline std::string ReadConsole::read() {
    std::string str;
    getline(std::cin,str);
    return str;
}

#endif //DESIGN_READCONSOLE_H
