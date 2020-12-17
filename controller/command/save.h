//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_SAVE_H
#define DESIGN_SAVE_H

#include "icommand.h"


class Save: public ICommand{
public:
    /*virtual*/ std::string execute(std::vector<std::string>);

};




#endif //DESIGN_SAVE_H
