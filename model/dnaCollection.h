//
// Created by mby on 16/07/2020.
//

#ifndef DESIGN_DNACOLLECTION_H
#define DESIGN_DNACOLLECTION_H
#include <map>
#include "dnaData.h"

class DnaCollection{
public:
    static DnaSeq* getDnaById(const size_t id);
    static DnaSeq* getByName(const std::string&);
    static std::string getNameById(const size_t);
    static bool addDna(DnaData* dna);
    void setDna(DnaData& dna);
private:
    static std::map <std::string,DnaSeq*> m_map_name_dna;
    static std::map <size_t ,std::string> m_map_id_name;
};

inline DnaSeq * DnaCollection::getDnaById(const size_t id) {
    if(m_map_id_name.find(id)!=m_map_id_name.end())
        return m_map_name_dna[m_map_id_name[id]];
    return NULL;
}

inline DnaSeq * DnaCollection::getByName(const std::string& name) {
    if(m_map_name_dna.find(name)!=m_map_name_dna.end())
        return m_map_name_dna[name];
    return NULL;
}


inline bool DnaCollection::addDna(DnaData* dna) {
    if(m_map_name_dna.find(dna->getName())==m_map_name_dna.end())
    {
        m_map_name_dna.insert(std::pair<std::string,DnaSeq*>(dna->getName(),dna->getDna()));
        m_map_id_name.insert(std::pair<size_t ,std::string>(dna->getId(),dna->getName()));
        return true;
    }
    return false;
}

inline std::string DnaCollection::getNameById(size_t id) {
    return m_map_id_name[id];
}


#endif //DESIGN_DNACOLLECTION_H
