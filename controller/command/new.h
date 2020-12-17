//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_NEW_H
#define DESIGN_NEW_H


#include <sstream>
#include "icommand.h"
#include "dnaCollection.h"


class New: public ICommand{
public:
    /*virtual*/ std::string execute(std::vector<std::string>);

private:
    static size_t s_count;
};



#endif //DESIGN_NEW_H
