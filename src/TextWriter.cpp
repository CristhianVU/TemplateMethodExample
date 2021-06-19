//
// Created by Pc on 14/06/2021.
//

#include "TextWriter.h"

void TextWriter::writeText() {
    this->write(this->filename, this->heroList);
}

const std::string &TextWriter::getFilename() const {
    return filename;
}

void TextWriter::setFilename(const std::string &filename) {
    TextWriter::filename = filename;
}

const std::vector<Hero> &TextWriter::getHeroList() const {
    return heroList;
}

void TextWriter::setHeroList(const std::vector<Hero> &heroList) {
    TextWriter::heroList = heroList;
}

TextWriter::TextWriter(const std::string &filename, const std::vector<Hero> &heroList) : filename(filename),
                                                                                         heroList(heroList) {}
