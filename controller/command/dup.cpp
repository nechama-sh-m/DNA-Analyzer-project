//
// Created by mby on 16/09/2020.
//

#include <sstream>
#include "dup.h"

std::string Dup::execute(std::vector<std::string> params){
    std::stringstream ss(params[1]);
    std::string name;
    size_t id;
    ss>>id;
    DnaSeq* dna= DnaCollection::getDnaById(id);
    if(params.size()==3)
    {
        name=params[2];
    }
    else{
        name=DnaCollection::getNameById(id)+"_";
        size_t count=1;
        while(DnaCollection::getByName(name+std::to_string(count++)));
        name+=std::to_string(count);
    }
    std::string seq=dna->get_seq();
    DnaData* new_dna=new DnaData(name,seq);
    std::string res="["+std::to_string(new_dna->getId())+"]"+" "+new_dna->getName()+": " + seq;
    DnaCollection::addDna(new_dna);

    return res;




}