//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_ICOMMAND_H
#define DESIGN_ICOMMAND_H


#include <vector>
#include <string>

class ICommand{
public:
    //virtual ~ICommand();
    virtual std::string execute(std::vector<std::string>)=0;

};

#endif //DESIGN_ICOMMAND_H

