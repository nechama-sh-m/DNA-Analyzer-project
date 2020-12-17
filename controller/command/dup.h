//
// Created by mby on 16/09/2020.
//

#ifndef DESIGN_DUP_H
#define DESIGN_DUP_H


#include "icommand.h"
#include "dnaCollection.h"

class Dup: public ICommand{
public:

    /*virtual*/ std::string execute(std::vector<std::string>);

};



#endif //DESIGN_DUP_H
