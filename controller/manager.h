//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_MANAGER_H
#define DESIGN_MANAGER_H



#include "cli.h"


class Manager{
public:
    Manager(IRead* reader,IWrite* writer);
    ~Manager();
    void init();
    void run();
    void shutDown();

private:
    Cli* m_cli;


};
inline Manager::Manager(IRead *reader, IWrite *writer):m_cli(new Cli(reader,writer)) {}
inline Manager::~Manager() {
    delete m_cli;
}

inline void Manager::run() {

        m_cli->executeCommand();

}


#endif //DESIGN_MANAGER_H
