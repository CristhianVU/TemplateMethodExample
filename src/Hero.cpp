//
// Created by Pc on 14/06/2021.
//

#include "Hero.h"

Hero::Hero() {}

Hero::Hero(const std::string &name, const std::string &skill, const std::string &heroId) : name(name), skill(skill),
                                                                                           heroId(heroId) {}

Hero::~Hero() {

}

const std::string &Hero::getName() const {
    return name;
}

void Hero::setName(const std::string &name) {
    Hero::name = name;
}

const std::string &Hero::getSkill() const {
    return skill;
}

void Hero::setSkill(const std::string &skill) {
    Hero::skill = skill;
}

const std::string &Hero::getHeroId() const {
    return heroId;
}

void Hero::setHeroId(const std::string &heroId) {
    Hero::heroId = heroId;
}

std::string Hero::toString() const {
    std::stringstream ss;
    ss<<"Name: "<<getName()<<", Quirk: "<<getSkill()<<", Hero name: "<<getHeroId()<<"\n";
    return ss.str();
}
