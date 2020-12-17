//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_DNADATA_H
#define DESIGN_DNADATA_H

#include "dna/dnaSeq.h"
class DnaData{
public:
    DnaData(std::string name,std::string dna);
    size_t getId();
    std::string getName();
    DnaSeq* getDna();

private:
    size_t m_id;
    std::string m_name;
    DnaSeq m_dna_seq;
    static size_t s_id;
};
inline DnaData::DnaData(std::string name,std::string dna):m_id(s_id++),m_name(name),m_dna_seq(dna){
}


inline size_t DnaData::getId() {
    return m_id;
}

inline std::string DnaData::getName() {
    return m_name;
}
inline DnaSeq* DnaData::getDna() {
    return &m_dna_seq;
}

#endif //DESIGN_DNADATA_H
