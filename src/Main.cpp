//
// Created by Pc on 14/06/2021.
//

#include <iostream>
#include "JsonWriter.h"
#include "CSVWriter.h"
#include "JsonReader.h"
#include "CSVReader.h"
int main() {
    Hero hero1("Izuku Midoriya","One for All","Deku");
    Hero hero2("Ochaco Uraraka","Levitate","Uravity");
    Hero hero3("Tsuyu Asui","Frog","Froppy");

    std::vector<Hero> heroList;
    heroList.push_back(hero1);
    heroList.push_back(hero2);
    heroList.push_back(hero3);

    JsonWriter *writer1=new JsonWriter("hero1.json",heroList);

    TextWriter *textWriter;
    textWriter=writer1;
    textWriter->writeText();


    CSVWriter *writer2=new CSVWriter("heroList.dat",heroList);
    textWriter=writer2;
    textWriter->writeText();


    JsonReader *reader1=new JsonReader("hero1.json");
    TextReader *textReader;
    textReader=reader1;
    textReader->readText();

    std::cout<<"Heroes from Json file"<<std::endl;
    for (int i=0;i<textReader->getHeroList().size();i++) {
        std::cout<<"Hero "<<i+1<<": "<<std::endl;
        std::cout<<textReader->getHeroList().at(i).toString();
    }

    CSVReader *reader2 =new CSVReader("heroList.dat");
    textReader=reader2;
    textReader->readText();


    std::cout<<"Heroes from CSV file"<<std::endl;
    for (int i=0;i<textReader->getHeroList().size();i++) {
        std::cout<<"Hero "<<i+1<<": "<<std::endl;
        std::cout<<textReader->getHeroList().at(i).toString();
    }


    return 0;
}
