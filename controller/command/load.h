//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_LOAD_H
#define DESIGN_LOAD_H

#include <string>
#include "icommand.h"
#include "dnaCollection.h"


class Load: public ICommand{
public:

    /*virtual*/ std::string execute(std::vector<std::string>);

};

#endif //DESIGN_LOAD_H
