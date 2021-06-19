//
// Created by Pc on 14/06/2021.
//

#ifndef PROGRA2_PROJECT_1_XRAY_TEXTWRITER_H
#define PROGRA2_PROJECT_1_XRAY_TEXTWRITER_H
#include "Hero.h"
#include <vector>
class TextWriter{
private:
    std::string filename;
    std::vector<Hero> heroList;
public:
    TextWriter(const std::string &filename, const std::vector<Hero> &heroList);
    const std::string &getFilename() const;
    void setFilename(const std::string &filename);
    const std::vector<Hero> &getHeroList() const;
    void setHeroList(const std::vector<Hero> &heroList);

    virtual void writeText() final;

protected:
    virtual void write(std::string filename, std::vector<Hero> heroList)=0;

};


#endif //PROGRA2_PROJECT_1_XRAY_TEXTWRITER_H
