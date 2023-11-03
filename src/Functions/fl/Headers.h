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

#ifndef FL_HEADERS_H
#define FL_HEADERS_H

/**
    The Headers.h file contains the headers of all the classes in the
    `fuzzylite` library, thereby encouraging the use of the directive `#include
    "fl/Headers.h"` in projects using the library.
 */


#include "src/Functions/fl/fuzzylite.h"

#include "src/Functions/fl/Benchmark.h"
#include "src/Functions/fl/Complexity.h"
#include "src/Functions/fl/Console.h"
#include "src/Functions/fl/Engine.h"
#include "src/Functions/fl/Exception.h"

#include "src/Functions/fl/activation/Activation.h"
#include "src/Functions/fl/activation/First.h"
#include "src/Functions/fl/activation/General.h"
#include "src/Functions/fl/activation/Highest.h"
#include "src/Functions/fl/activation/Last.h"
#include "src/Functions/fl/activation/Lowest.h"
#include "src/Functions/fl/activation/Proportional.h"
#include "src/Functions/fl/activation/Threshold.h"

#include "src/Functions/fl/defuzzifier/Bisector.h"
#include "src/Functions/fl/defuzzifier/Centroid.h"
#include "src/Functions/fl/defuzzifier/Defuzzifier.h"
#include "src/Functions/fl/defuzzifier/IntegralDefuzzifier.h"
#include "src/Functions/fl/defuzzifier/SmallestOfMaximum.h"
#include "src/Functions/fl/defuzzifier/LargestOfMaximum.h"
#include "src/Functions/fl/defuzzifier/MeanOfMaximum.h"
#include "src/Functions/fl/defuzzifier/WeightedAverage.h"
#include "src/Functions/fl/defuzzifier/WeightedDefuzzifier.h"
#include "src/Functions/fl/defuzzifier/WeightedSum.h"

#include "src/Functions/fl/factory/ActivationFactory.h"
#include "src/Functions/fl/factory/CloningFactory.h"
#include "src/Functions/fl/factory/ConstructionFactory.h"
#include "src/Functions/fl/factory/FactoryManager.h"
#include "src/Functions/fl/factory/FunctionFactory.h"
#include "src/Functions/fl/factory/DefuzzifierFactory.h"
#include "src/Functions/fl/factory/HedgeFactory.h"
#include "src/Functions/fl/factory/SNormFactory.h"
#include "src/Functions/fl/factory/TNormFactory.h"
#include "src/Functions/fl/factory/TermFactory.h"

#include "src/Functions/fl/imex/CppExporter.h"
#include "src/Functions/fl/imex/FclImporter.h"
#include "src/Functions/fl/imex/FclExporter.h"
#include "src/Functions/fl/imex/FisImporter.h"
#include "src/Functions/fl/imex/FisExporter.h"
#include "src/Functions/fl/imex/FldExporter.h"
#include "src/Functions/fl/imex/FllImporter.h"
#include "src/Functions/fl/imex/FllExporter.h"
#include "src/Functions/fl/imex/JavaExporter.h"
#include "src/Functions/fl/imex/RScriptExporter.h"

#include "src/Functions/fl/hedge/Any.h"
#include "src/Functions/fl/hedge/Extremely.h"
#include "src/Functions/fl/hedge/Hedge.h"
#include "src/Functions/fl/hedge/HedgeFunction.h"
#include "src/Functions/fl/hedge/Not.h"
#include "src/Functions/fl/hedge/Seldom.h"
#include "src/Functions/fl/hedge/Somewhat.h"
#include "src/Functions/fl/hedge/Very.h"

#include "src/Functions/fl/Operation.h"

#include "src/Functions/fl/norm/Norm.h"
#include "src/Functions/fl/norm/SNorm.h"
#include "src/Functions/fl/norm/TNorm.h"

#include "src/Functions/fl/norm/s/AlgebraicSum.h"
#include "src/Functions/fl/norm/s/BoundedSum.h"
#include "src/Functions/fl/norm/s/DrasticSum.h"
#include "src/Functions/fl/norm/s/EinsteinSum.h"
#include "src/Functions/fl/norm/s/HamacherSum.h"
#include "src/Functions/fl/norm/s/Maximum.h"
#include "src/Functions/fl/norm/s/NilpotentMaximum.h"
#include "src/Functions/fl/norm/s/NormalizedSum.h"
#include "src/Functions/fl/norm/s/SNormFunction.h"
#include "src/Functions/fl/norm/s/UnboundedSum.h"

#include "src/Functions/fl/norm/t/AlgebraicProduct.h"
#include "src/Functions/fl/norm/t/BoundedDifference.h"
#include "src/Functions/fl/norm/t/DrasticProduct.h"
#include "src/Functions/fl/norm/t/EinsteinProduct.h"
#include "src/Functions/fl/norm/t/HamacherProduct.h"
#include "src/Functions/fl/norm/t/Minimum.h"
#include "src/Functions/fl/norm/t/NilpotentMinimum.h"
#include "src/Functions/fl/norm/t/TNormFunction.h"

#include "src/Functions/fl/rule/Antecedent.h"
#include "src/Functions/fl/rule/Consequent.h"
#include "src/Functions/fl/rule/Rule.h"
#include "src/Functions/fl/rule/RuleBlock.h"
#include "src/Functions/fl/rule/Expression.h"

#include "src/Functions/fl/term/Aggregated.h"
#include "src/Functions/fl/term/Bell.h"
#include "src/Functions/fl/term/Binary.h"
#include "src/Functions/fl/term/Concave.h"
#include "src/Functions/fl/term/Constant.h"
#include "src/Functions/fl/term/Cosine.h"
#include "src/Functions/fl/term/Discrete.h"
#include "src/Functions/fl/term/Function.h"
#include "src/Functions/fl/term/Gaussian.h"
#include "src/Functions/fl/term/GaussianProduct.h"
#include "src/Functions/fl/term/Linear.h"
#include "src/Functions/fl/term/PiShape.h"
#include "src/Functions/fl/term/Ramp.h"
#include "src/Functions/fl/term/Rectangle.h"
#include "src/Functions/fl/term/SShape.h"
#include "src/Functions/fl/term/Sigmoid.h"
#include "src/Functions/fl/term/SigmoidDifference.h"
#include "src/Functions/fl/term/SigmoidProduct.h"
#include "src/Functions/fl/term/Spike.h"
#include "src/Functions/fl/term/Term.h"
#include "src/Functions/fl/term/Activated.h"
#include "src/Functions/fl/term/Trapezoid.h"
#include "src/Functions/fl/term/Triangle.h"
#include "src/Functions/fl/term/ZShape.h"

#include "src/Functions/fl/variable/InputVariable.h"
#include "src/Functions/fl/variable/OutputVariable.h"
#include "src/Functions/fl/variable/Variable.h"


#endif /* FL_HEADERS_H */
