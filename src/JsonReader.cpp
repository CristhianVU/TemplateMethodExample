//
// Created by Pc on 17/06/2021.
//

#include "JsonReader.h"

void from_json(const json &_json, Hero &hero){
   hero.setName(_json.at("name").get<std::string>());
    hero.setSkill(_json.at("skill").get<std::string>());
    hero.setHeroId(_json.at("heroId").get<std::string>());
}

JsonReader::JsonReader(const std::string &filename) : TextReader(filename){}

std::vector<Hero> JsonReader::deserialize(const std::string &data) {
    json jsonData=json::parse(data);
    std::vector<Hero> heroList=jsonData;
    return heroList;
}

std::string JsonReader::readFile(const std::string &filename) {
    std::string content;
    try{
        std::ifstream file(filename);
        file.exceptions(std::ifstream::failbit|std::ifstream::badbit);

        std::stringstream buffer;
        buffer<<file.rdbuf();
        std::string fileContent(buffer.str());
        content=fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("opening exception, reading exception, closing file exception");
    }
    return content;
}

std::vector<Hero> JsonReader::read(std::string filename) {
    std::vector<Hero> heroList= deserialize(readFile(filename));
    return heroList;
}
