//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_COMMANDCOLLECTION_H
#define DESIGN_COMMANDCOLLECTION_H

#include <iostream>
#include <map>
#include "icommand.h"
#include "new.h"
#include "load.h"
#include "dup.h"

class CommandCollection{
public:
    CommandCollection();
    ~CommandCollection();
    ICommand* getCommand(std::string);
private:
    std::map <std::string,ICommand*> m_map_command;
};

inline CommandCollection::CommandCollection():m_map_command({{"new",new New()},{"load",new Load()},{"dup",new Dup()}}){}//-------------------------
inline CommandCollection::~CommandCollection() {
    std::map <std::string,ICommand*>::iterator it=m_map_command.begin();
    for (; it!=m_map_command.end(); it++) {
        delete it->second;//--------------------------------------

    }
}


inline ICommand * CommandCollection::getCommand(std::string command) {
    return m_map_command[command];
}

#endif //DESIGN_COMMANDCOLLECTION_H
