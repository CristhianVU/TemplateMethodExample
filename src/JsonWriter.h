//
// Created by Pc on 14/06/2021.
//

#ifndef PROGRA2_PROJECT_1_XRAY_JSONWRITER_H
#define PROGRA2_PROJECT_1_XRAY_JSONWRITER_H
#include "TextWriter.h"
#include <../lib/nlohmann/json.hpp>
#include <fstream>
using nlohmann::json;
class JsonWriter: public TextWriter{
public:
    JsonWriter(const std::string &filename, const std::vector<Hero> &heroList);
protected:
    std::string serialize(std::vector<Hero> heroList);
    void saveFile(std::string heroListJson,std::string filename);
    void write(std::string filename, std::vector<Hero> heroList) override;
};


#endif //PROGRA2_PROJECT_1_XRAY_JSONWRITER_H
