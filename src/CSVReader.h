//
// Created by Pc on 17/06/2021.
//

#ifndef PATRONTEMPLATEMETHOD_CSVREADER_H
#define PATRONTEMPLATEMETHOD_CSVREADER_H
#include "TextReader.h"
#include <fstream>
class CSVReader: public TextReader{
public:
    CSVReader(const std::string &filename);
    std::vector<Hero> read(std::string filename) override;


};


#endif //PATRONTEMPLATEMETHOD_CSVREADER_H
