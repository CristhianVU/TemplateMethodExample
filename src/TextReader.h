//
// Created by Pc on 17/06/2021.
//

#ifndef PATRONTEMPLATEMETHOD_TEXTREADER_H
#define PATRONTEMPLATEMETHOD_TEXTREADER_H
#include "Hero.h"
#include <vector>

class TextReader {
private:
    std::string filename;
    std::vector<Hero> heroList;
public:
    TextReader();
    TextReader(const std::string &filename);
    virtual ~TextReader();
    const std::string &getFilename() const;
    void setFilename(const std::string &filename);
    const std::vector<Hero> &getHeroList() const;
    void setHeroList(const std::vector<Hero> &heroList);

    virtual void readText() final;

protected:
    virtual std::vector<Hero> read (std::string filename)=0;
};


#endif //PATRONTEMPLATEMETHOD_TEXTREADER_H
