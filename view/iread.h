//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_IREAD_H
#define DESIGN_IREAD_H


#include <string>

class IRead{
public:
    virtual ~IRead(){}
    virtual std::string read()=0;
};

#endif //DESIGN_IREAD_H
