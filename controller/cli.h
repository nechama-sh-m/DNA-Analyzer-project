//
// Created by mby on 15/07/2020.
//

#ifndef DESIGN_CLI_H
#define DESIGN_CLI_H

#include <iostream>
#include <cstring>
#include <vector>
#include "commandCollection.h"
#include "iwrite.h"
#include "iread.h"

class Cli{
public:
    Cli(IRead *reader, IWrite *writer);
    void executeCommand();

private:
    std::vector<std::string> split(std::string str);

    IRead* m_reader;
    IWrite* m_writer;
};

inline Cli::Cli(IRead *reader, IWrite *writer):m_reader(reader),m_writer(writer) {}

inline std::vector<std::string> Cli::split(std::string str) {
    std::vector<std::string> param;
    std::string word = "";
    for (auto x : str)//-----------------------------------
    {
        if (x == ' ')
        {
            param.push_back(word);
            word = "";
        }
        else
        {
            word = word + x;
        }
    }
    param.push_back(word);
    return param;
}

inline void Cli::executeCommand() {
    CommandCollection cmd;
    std::string command;
    std::vector<std::string> params;

    while (true)
    {
        //std::cin>>str;
       // getline(std::cin,str);
        //m_writer->write(">>");
        command=m_reader->read();
        if (command!="")
        {
            params=split(command);
            m_writer->write((cmd.getCommand(params[0]))->execute(params));

        }


    }


}

#endif //DESIGN_CLI_H
