//
// Created by mby on 19/07/2020.
//

#include "load.h"
#include <sstream>
#include "readFile.h"



std::string Load::execute(std::vector<std::string> params){
    std::string name,dna;
    std::stringstream id;
    if(params.size()<3)
    {
        name=params[1];
    }
    else
    {
        name=params[2];
    }
    try{
        ReadFile reader(params[1]);
        dna=reader.read();
    }
    catch (std::exception) {
        return "file not found";
    }


    DnaData* new_dna=new DnaData(name,dna);
    id<<new_dna->getId();
    //dna=new_dna->getDna()->get_seq();
    if(dna.size()>40)
    {
        dna=dna.substr(0,32)+"..."+dna.substr(dna.size()-3,dna.size());
    }

    std::string res="["+id.str()+"]"+" "+new_dna->getName()+": "+ dna;

    if(DnaCollection::addDna(new_dna))
    {
        return res;
    }

    delete new_dna;
    return "The name of DNA already exist";


}