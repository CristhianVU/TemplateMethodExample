//
// Created by Pc on 14/06/2021.
//

#include "CSVWriter.h"

CSVWriter::CSVWriter(const std::string &filename, const std::vector<Hero> &heroList) : TextWriter(filename, heroList) {}

void CSVWriter::write(std::string filename, std::vector<Hero> heroList) {
    try{
    std::ofstream file(filename,std::ofstream::out);
    for (int i = 0; i < heroList.size(); i++) {
        file<<heroList.at(i).getName()<<","
            <<heroList.at(i).getSkill()<<","
            <<heroList.at(i).getHeroId()<<std::endl;
    }
    file.close();
    }
    catch (std::ofstream::failure &e){
        throw std::runtime_error("Exception saving file");
    }

}
