//
// Created by Pc on 17/06/2021.
//

#include "CSVReader.h"

CSVReader::CSVReader(const std::string &filename) : TextReader(filename) {}

std::vector<Hero> CSVReader::read(std::string filename) {
    std::vector<Hero> heroList;
    Hero hero;
    try {
        std::string name, skill, heroId,line;
        std::ifstream file(filename);
        while (std::getline(file,line)) {
            std::stringstream ss(line);
            std::getline(ss, name, ',');
            std::getline(ss, skill, ',');
            std::getline(ss, heroId, ',');

            hero.setName(name);
            hero.setSkill(skill);
            hero.setHeroId(heroId);
            heroList.push_back(hero);
        }
        file.close();
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening, reading, closing file");
    }
    return heroList;
}


