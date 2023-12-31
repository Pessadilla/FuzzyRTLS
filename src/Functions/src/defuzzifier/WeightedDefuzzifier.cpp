/*
 fuzzylite (R), a fuzzy logic control library in C++.
 Copyright (C) 2010-2017 FuzzyLite Limited. All rights reserved.
 Author: Juan Rada-Vilela, Ph.D. <jcrada@fuzzylite.com>

 This file is part of fuzzylite.

 fuzzylite is free software: you can redistribute it and/or modify it under
 the terms of the FuzzyLite License included with the software.

 You should have received a copy of the FuzzyLite License along with
 fuzzylite. If not, see <http://www.fuzzylite.com/license/>.

 fuzzylite is a registered trademark of FuzzyLite Limited.
 */

#include "src/Functions/fl/defuzzifier/WeightedDefuzzifier.h"

#include "src/Functions/fl/term/Activated.h"
#include "src/Functions/fl/term/Concave.h"
#include "src/Functions/fl/term/Constant.h"
#include "src/Functions/fl/term/Function.h"
#include "src/Functions/fl/term/Linear.h"
#include "src/Functions/fl/term/Ramp.h"
#include "src/Functions/fl/term/Sigmoid.h"
#include "src/Functions/fl/term/SShape.h"
#include "src/Functions/fl/term/ZShape.h"

namespace fl {

    WeightedDefuzzifier::WeightedDefuzzifier(Type type) : _type(type) { }

    WeightedDefuzzifier::WeightedDefuzzifier(const std::string& type) {
        if (type == "Automatic") setType(Automatic);
        else if (type == "TakagiSugeno") setType(TakagiSugeno);
        else if (type == "Tsukamoto") setType(Tsukamoto);
        else {
            setType(Automatic);
            FL_LOG("[warning] incorrect type <" + type + "> of WeightedDefuzzifier"
                    + " has been defaulted to <Automatic>");
        }
    }

    WeightedDefuzzifier::~WeightedDefuzzifier() { }

    std::string WeightedDefuzzifier::typeName(Type type) {
        switch (type) {
            case Automatic: return "Automatic";
            case TakagiSugeno: return "TakagiSugeno";
            case Tsukamoto: return "Tsukamoto";
            default: return "";
        }
    }

    void WeightedDefuzzifier::setType(Type type) {
        this->_type = type;
    }

    WeightedDefuzzifier::Type WeightedDefuzzifier::getType() const {
        return this->_type;
    }

    std::string WeightedDefuzzifier::getTypeName() const {
        return typeName(getType());
    }

    WeightedDefuzzifier::Type WeightedDefuzzifier::inferType(const Term* term) const {
        if (dynamic_cast<const Constant*> (term)
                or dynamic_cast<const Linear*> (term)
                or dynamic_cast<const Function*> (term)) {
            return TakagiSugeno;
        }
        return Tsukamoto;
    }

}
