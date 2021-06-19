//
// Created by Pc on 14/06/2021.
//

#include "JsonWriter.h"
void to_json(json &_json, const Hero &hero){
    _json["name"]=hero.getName();
    _json["skill"]=hero.getSkill();
    _json["heroId"]=hero.getHeroId();

}

std::string JsonWriter::serialize(std::vector<Hero> heroList) {
    json jsonData(heroList);
    std::string jsonArray=jsonData.dump();
    return jsonArray;
}

void JsonWriter::saveFile(std::string heroListJson, std::string filename) {
    try{
        std::ofstream file(filename,std::ofstream::out);
        file<<heroListJson;
        file.close();
    }
    catch (std::ofstream::failure e){
        throw std::runtime_error("Exception saving file");
    }

}

void JsonWriter::write(std::string filename, std::vector<Hero> heroList){
    saveFile(serialize(heroList),filename);
}

JsonWriter::JsonWriter(const std::string &filename, const std::vector<Hero> &heroList) : TextWriter(filename,
                                                                                                    heroList) {}




