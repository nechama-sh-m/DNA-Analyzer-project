//
// Created by mby on 15/07/2020.
//
#include "manager.h"
#include "readConsole.h"
#include "writeConsole.h"


int main(){
    ReadConsole* reader=new ReadConsole();
    WriteConsole* writer=new WriteConsole();
    Manager m(reader,writer);
    m.run();
    delete reader;
    delete writer;
    return 0;
}