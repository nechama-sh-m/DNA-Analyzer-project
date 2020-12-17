//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_IWRITE_H
#define DESIGN_IWRITE_H


#include <string>

class IWrite{
public:
    virtual ~IWrite(){}
    virtual void write(std::string)=0;
};

#endif //DESIGN_IWRITE_H
