//
// Created by mby on 14/09/2020.
//

#include "readFile.h"

std::string ReadFile::read() {
    std::ifstream dna_file(m_fileName);
    if(!dna_file.is_open()) {
        throw std::exception();
    }
    std::string str;
    std::string res = "";
    while (getline(dna_file, str))
        res += str;
    dna_file.close();
    return res;
}