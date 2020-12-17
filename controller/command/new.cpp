//
// Created by mby on 18/07/2020.
//
#include "new.h"
size_t New::s_count=0;

std::string New::execute(std::vector<std::string> params) {
    std::string name="seq";
    std::stringstream num,id;

    if(params.size()<3)
    {
        num<<s_count;
        name=name+num.str();
        while (DnaCollection::getByName(name))
        {
            s_count ++;
           // num<<s_count;//--------------------------------
            name=name+std::to_string(s_count);

        }
    }
    else
    {
        name=params[2].substr(1,params[2].length()-1);
    }
    DnaData* new_dna=new DnaData(name,params[1]);
    id<<new_dna->getId();
    std::string res="["+id.str()+"]"+" "+new_dna->getName()+": "+ new_dna->getDna()->get_seq();

    if(DnaCollection::addDna(new_dna))
    {
        return res;
    }

    delete new_dna;
    return "The name of DNA already exist";


}

