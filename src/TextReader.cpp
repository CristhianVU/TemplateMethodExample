//
// Created by Pc on 17/06/2021.
//

#include "TextReader.h"

TextReader::TextReader() {}

TextReader::TextReader(const std::string &filename) : filename(filename){}

TextReader::~TextReader() {

}

const std::string &TextReader::getFilename() const {
    return filename;
}

void TextReader::setFilename(const std::string &filename) {
    TextReader::filename = filename;
}

const std::vector<Hero> &TextReader::getHeroList() const {
    return heroList;
}

void TextReader::setHeroList(const std::vector<Hero> &heroList) {
    TextReader::heroList = heroList;
}

void TextReader::readText() {
    this->heroList= read(this->filename);
}
