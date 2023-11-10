#include "fuzzymodule.h"
#include "src/Functions/fl/Engine.h"
#include "src/Functions/fl/rule/Rule.h"
#include "src/Functions/fl/term/Trapezoid.h"
#include "src/Functions/fl/rule/RuleBlock.h"
#include "src/Functions/fl/variable/InputVariable.h"
#include "src/Functions/fl/variable/OutputVariable.h"

fuzzymodule::fuzzymodule(double triangle){}

std::string fuzzymodule::fuzzyoutput(double triangle)
{
    fl::Engine* engine = new fl::Engine;


    fl::InputVariable* area = new fl::InputVariable;
    area->setName("Alan");
    area->setRange(0.0,50.0);
    area->addTerm(new fl::Trapezoid("CokKucuk",0,0,1.5,2));
    area->addTerm(new fl::Trapezoid("Kucuk",1.8,2,3,3.5));
    area->addTerm(new fl::Trapezoid("Orta",3.3,4,5.5,6.5));
    area->addTerm(new fl::Trapezoid("Buyuk",6.2,7,9,10));
    area->addTerm(new fl::Trapezoid("CokBuyuk",9.8,10,50,50));
    engine->addInputVariable(area);

    fl::OutputVariable* dogruluk = new fl::OutputVariable;
    dogruluk->setName("Dogruluk");
    dogruluk->setRange(0,100);
    dogruluk->addTerm(new fl::Trapezoid("Tutarsiz",0,0,25,35));
    dogruluk->addTerm(new fl::Trapezoid("CokDusuk",30,38,42,47));
    dogruluk->addTerm(new fl::Trapezoid("Dusuk",45,55,65,70));
    dogruluk->addTerm(new fl::Trapezoid("Normal",68,75,83,88));
    dogruluk->addTerm(new fl::Trapezoid("Yuksek",85,90,100,100));
    engine->addOutputVariable(dogruluk);

    fl::RuleBlock* rules = new fl::RuleBlock;
    rules->addRule(fl::Rule::parse("if Alan is CokKucuk then Dogruluk is Yuksek",engine));
    rules->addRule(fl::Rule::parse("if Alan is Kucuk then Dogruluk is Normal",engine));
    rules->addRule(fl::Rule::parse("if Alan is Orta then Dogruluk is Dusuk",engine));
    rules->addRule(fl::Rule::parse("if Alan is Buyuk then Dogruluk is CokDusuk",engine));
    rules->addRule(fl::Rule::parse("if Alan is CokBuyuk then Dogruluk is Tutarsiz",engine));
    engine->addRuleBlock(rules);

    engine->configure("Minimum","Maximum","Minimum","Maximum","WeightedAverage","General");

    area->setValue(triangle);

    engine->process();

//    std::cout << "Alan: " << area->getValue() << " - Dogruluk: "<< dogruluk->fuzzyOutputValue()  << std::endl;
    std::string asd = dogruluk->fuzzyOutputValue();
//    std::cout << "asd: "<< asd << std::endl;


    delete engine;

    return asd;
}

