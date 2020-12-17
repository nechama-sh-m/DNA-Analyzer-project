//
// Created by mby on 14/09/2020.
//

#ifndef DESIGN_READFILE_H
#define DESIGN_READFILE_H

#include "iread.h"
#include <fstream>
#include <iostream>

class ReadFile: public IRead{
public:
    ReadFile(std::string);
    /*virtual*/ std::string read();

private:
    std::string m_fileName;

};

inline ReadFile::ReadFile(std::string name):m_fileName(name) {}





#endif //DESIGN_READFILE_H
