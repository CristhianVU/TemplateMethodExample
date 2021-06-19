//
// Created by Pc on 14/06/2021.
//

#ifndef PROGRA2_PROJECT_1_XRAY_HERO_H
#define PROGRA2_PROJECT_1_XRAY_HERO_H
#include <string>
#include <sstream>

class Hero {
private:
    std::string name;
    std::string skill;
    std::string heroId;

public:
    Hero();

    Hero(const std::string &name, const std::string &skill, const std::string &heroId);

    virtual ~Hero();

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSkill() const;

    void setSkill(const std::string &skill);

    const std::string &getHeroId() const;

    void setHeroId(const std::string &heroId);

    std::string toString() const;
};


#endif //PROGRA2_PROJECT_1_XRAY_HERO_H
