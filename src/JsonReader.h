//
// Created by Pc on 17/06/2021.
//

#ifndef PATRONTEMPLATEMETHOD_JSONREADER_H
#define PATRONTEMPLATEMETHOD_JSONREADER_H
#include "TextReader.h"
#include <../lib/nlohmann/json.hpp>
#include <fstream>

using nlohmann::json;

class JsonReader: public TextReader{
protected:
    std::vector<Hero> deserialize(const std::string &data);
    std::string readFile(const std::string &filename);
    std::vector<Hero> read(std::string filename) override;
public:
    JsonReader(const std::string &filename);
};


#endif //PATRONTEMPLATEMETHOD_JSONREADER_H
