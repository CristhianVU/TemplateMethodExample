//
// Created by Pc on 14/06/2021.
//

#ifndef PROGRA2_PROJECT_1_XRAY_CSVWRITER_H
#define PROGRA2_PROJECT_1_XRAY_CSVWRITER_H
#include "TextWriter.h"
#include <utility>
#include <fstream>
class CSVWriter: public TextWriter{
public:
    CSVWriter(const std::string &filename, const std::vector<Hero> &heroList);
protected:
    void write(std::string filename, std::vector<Hero> heroList) override;
};


#endif //PROGRA2_PROJECT_1_XRAY_CSVWRITER_H
