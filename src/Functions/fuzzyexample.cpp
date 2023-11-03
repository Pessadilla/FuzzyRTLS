#include "fuzzyexample.h"
#include "src/Functions/fl/Headers.h"

fuzzyExample::fuzzyExample()
{

    fl::Engine* engine = new fl::Engine;


    fl::InputVariable* temperature = new fl::InputVariable;
    temperature->setName("Sicaklik");
    temperature->setRange(0.0, 100.0);
    temperature->addTerm(new fl::Triangle("Soğuk", 0.0, 30.0, 50.0));
    temperature->addTerm(new fl::Triangle("Ilık", 30.0, 50.0, 70.0));
    temperature->addTerm(new fl::Triangle("Sıcak", 50.0, 70.0, 100.0));
    engine->addInputVariable(temperature);


    fl::OutputVariable* cooler = new fl::OutputVariable;
    cooler->setName("Soğutucu");
    cooler->setRange(0.0, 100.0);
    cooler->addTerm(new fl::Triangle("Düşük", 0.0, 30.0, 60.0));
    cooler->addTerm(new fl::Triangle("Orta", 30.0, 60.0, 90.0));
    cooler->addTerm(new fl::Triangle("Yüksek", 60.0, 90.0, 100.0));
    engine->addOutputVariable(cooler);


    fl::RuleBlock* rules = new fl::RuleBlock;
    rules->addRule(fl::Rule::parse("if Sicaklik is Soğuk then Soğutucu is Yüksek", engine));
    rules->addRule(fl::Rule::parse("if Sicaklik is Ilık then Soğutucu is Orta", engine));
    rules->addRule(fl::Rule::parse("if Sicaklik is Sıcak then Soğutucu is Düşük", engine));
    engine->addRuleBlock(rules);


    engine->configure("Minimum","Maximum","Minimum","Maximum","WeightedAverage","Highest");


    temperature->setValue(95);


    engine->process();


    std::cout << "Sıcaklık: " << temperature->getValue() << " - Soğutucu: " << cooler->getValue() << std::endl;


    delete engine;
}
