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

#include "src/Functions/fl/factory/TermFactory.h"

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
#include "src/Functions/fl/term/Trapezoid.h"
#include "src/Functions/fl/term/Triangle.h"
#include "src/Functions/fl/term/ZShape.h"

namespace fl {

    TermFactory::TermFactory() : ConstructionFactory<Term*>("Term") {
        registerConstructor("", fl::null);
        registerConstructor(Bell().className(), &(Bell::constructor));
        registerConstructor(Binary().className(), &(Binary::constructor));
        registerConstructor(Concave().className(), &(Concave::constructor));
        registerConstructor(Constant().className(), &(Constant::constructor));
        registerConstructor(Cosine().className(), &(Cosine::constructor));
        registerConstructor(Discrete().className(), &(Discrete::constructor));
        registerConstructor(Function().className(), &(Function::constructor));
        registerConstructor(Gaussian().className(), &(Gaussian::constructor));
        registerConstructor(GaussianProduct().className(), &(GaussianProduct::constructor));
        registerConstructor(Linear().className(), &(Linear::constructor));
        registerConstructor(PiShape().className(), &(PiShape::constructor));
        registerConstructor(Ramp().className(), &(Ramp::constructor));
        registerConstructor(Rectangle().className(), &(Rectangle::constructor));
        registerConstructor(SShape().className(), &(SShape::constructor));
        registerConstructor(Sigmoid().className(), &(Sigmoid::constructor));
        registerConstructor(SigmoidDifference().className(), &(SigmoidDifference::constructor));
        registerConstructor(SigmoidProduct().className(), &(SigmoidProduct::constructor));
        registerConstructor(Spike().className(), &(Spike::constructor));
        registerConstructor(Trapezoid().className(), &(Trapezoid::constructor));
        registerConstructor(Triangle().className(), &(Triangle::constructor));
        registerConstructor(ZShape().className(), &(ZShape::constructor));
    }

    TermFactory::~TermFactory() { }

}
