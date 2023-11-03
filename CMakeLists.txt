cmake_minimum_required(VERSION 3.21.1)

option(LINK_INSIGHT "Link Qt Insight Tracker library" ON)
option(BUILD_QDS_COMPONENTS "Build design studio components" ON)

project(FuzzyRTLSApp LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Core Gui Qml Quick)

if (Qt6_VERSION VERSION_GREATER_EQUAL 6.3)
    qt_standard_project_setup()
endif()

qt_add_executable(FuzzyRTLSApp src/main.cpp
    src/Functions/circleintersection.cpp src/Functions/circleintersection.h src/Functions/findcoordinate.cpp src/Functions/findcoordinate.h src/Functions/pointcomparer.cpp src/Functions/pointcomparer.h src/Functions/trianglecenter.cpp src/Functions/trianglecenter.h
    src/Functions/fl/activation/Activation.h src/Functions/fl/activation/First.h src/Functions/fl/activation/General.h src/Functions/fl/activation/Highest.h src/Functions/fl/activation/Last.h src/Functions/fl/activation/Lowest.h src/Functions/fl/activation/Proportional.h src/Functions/fl/activation/Threshold.h src/Functions/fl/defuzzifier/Bisector.h src/Functions/fl/defuzzifier/Centroid.h src/Functions/fl/defuzzifier/Defuzzifier.h src/Functions/fl/defuzzifier/IntegralDefuzzifier.h src/Functions/fl/defuzzifier/LargestOfMaximum.h src/Functions/fl/defuzzifier/MeanOfMaximum.h src/Functions/fl/defuzzifier/SmallestOfMaximum.h src/Functions/fl/defuzzifier/WeightedAverage.h src/Functions/fl/defuzzifier/WeightedAverageCustom.h src/Functions/fl/defuzzifier/WeightedDefuzzifier.h src/Functions/fl/defuzzifier/WeightedSum.h src/Functions/fl/defuzzifier/WeightedSumCustom.h src/Functions/fl/factory/ActivationFactory.h src/Functions/fl/factory/CloningFactory.h src/Functions/fl/factory/ConstructionFactory.h src/Functions/fl/factory/DefuzzifierFactory.h src/Functions/fl/factory/FactoryManager.h src/Functions/fl/factory/FunctionFactory.h src/Functions/fl/factory/HedgeFactory.h src/Functions/fl/factory/SNormFactory.h src/Functions/fl/factory/TermFactory.h src/Functions/fl/factory/TNormFactory.h src/Functions/fl/hedge/Any.h src/Functions/fl/hedge/Extremely.h src/Functions/fl/hedge/Hedge.h src/Functions/fl/hedge/HedgeFunction.h src/Functions/fl/hedge/Not.h src/Functions/fl/hedge/Seldom.h src/Functions/fl/hedge/Somewhat.h src/Functions/fl/hedge/Very.h src/Functions/fl/imex/CppExporter.h src/Functions/fl/imex/Exporter.h src/Functions/fl/imex/FclExporter.h src/Functions/fl/imex/FclImporter.h src/Functions/fl/imex/FisExporter.h src/Functions/fl/imex/FisImporter.h src/Functions/fl/imex/FldExporter.h src/Functions/fl/imex/FllExporter.h src/Functions/fl/imex/FllImporter.h src/Functions/fl/imex/Importer.h src/Functions/fl/imex/JavaExporter.h src/Functions/fl/imex/RScriptExporter.h src/Functions/fl/norm/s/AlgebraicSum.h src/Functions/fl/norm/s/BoundedSum.h src/Functions/fl/norm/s/DrasticSum.h src/Functions/fl/norm/s/EinsteinSum.h src/Functions/fl/norm/s/HamacherSum.h src/Functions/fl/norm/s/Maximum.h src/Functions/fl/norm/s/NilpotentMaximum.h src/Functions/fl/norm/s/NormalizedSum.h src/Functions/fl/norm/s/SNormFunction.h src/Functions/fl/norm/s/UnboundedSum.h src/Functions/fl/norm/t/AlgebraicProduct.h src/Functions/fl/norm/t/BoundedDifference.h src/Functions/fl/norm/t/DrasticProduct.h src/Functions/fl/norm/t/EinsteinProduct.h src/Functions/fl/norm/t/HamacherProduct.h src/Functions/fl/norm/t/Minimum.h src/Functions/fl/norm/t/NilpotentMinimum.h src/Functions/fl/norm/t/TNormFunction.h src/Functions/fl/norm/Norm.h src/Functions/fl/norm/SNorm.h src/Functions/fl/norm/TNorm.h src/Functions/fl/rule/Antecedent.h src/Functions/fl/rule/Consequent.h src/Functions/fl/rule/Expression.h src/Functions/fl/rule/Rule.h src/Functions/fl/rule/RuleBlock.h src/Functions/fl/term/Activated.h src/Functions/fl/term/Aggregated.h src/Functions/fl/term/Bell.h src/Functions/fl/term/Binary.h src/Functions/fl/term/Concave.h src/Functions/fl/term/Constant.h src/Functions/fl/term/Cosine.h src/Functions/fl/term/Discrete.h src/Functions/fl/term/Function.h src/Functions/fl/term/Gaussian.h src/Functions/fl/term/GaussianProduct.h src/Functions/fl/term/Linear.h src/Functions/fl/term/PiShape.h src/Functions/fl/term/Ramp.h src/Functions/fl/term/Rectangle.h src/Functions/fl/term/Sigmoid.h src/Functions/fl/term/SigmoidDifference.h src/Functions/fl/term/SigmoidProduct.h src/Functions/fl/term/Spike.h src/Functions/fl/term/SShape.h src/Functions/fl/term/Term.h src/Functions/fl/term/Trapezoid.h src/Functions/fl/term/Triangle.h src/Functions/fl/term/ZShape.h src/Functions/fl/variable/InputVariable.h src/Functions/fl/variable/OutputVariable.h src/Functions/fl/variable/Variable.h src/Functions/fl/Benchmark.h src/Functions/fl/Complexity.h src/Functions/fl/Console.h src/Functions/fl/Engine.h src/Functions/fl/Exception.h src/Functions/fl/fuzzylite.h src/Functions/fl/Headers.h src/Functions/fl/Operation.h src/Functions/src/activation/First.cpp src/Functions/src/activation/General.cpp src/Functions/src/activation/Highest.cpp src/Functions/src/activation/Last.cpp src/Functions/src/activation/Lowest.cpp src/Functions/src/activation/Proportional.cpp src/Functions/src/activation/Threshold.cpp src/Functions/src/defuzzifier/Bisector.cpp src/Functions/src/defuzzifier/Centroid.cpp src/Functions/src/defuzzifier/IntegralDefuzzifier.cpp src/Functions/src/defuzzifier/LargestOfMaximum.cpp src/Functions/src/defuzzifier/MeanOfMaximum.cpp src/Functions/src/defuzzifier/SmallestOfMaximum.cpp src/Functions/src/defuzzifier/WeightedAverage.cpp src/Functions/src/defuzzifier/WeightedAverageCustom.cpp src/Functions/src/defuzzifier/WeightedDefuzzifier.cpp src/Functions/src/defuzzifier/WeightedSum.cpp src/Functions/src/defuzzifier/WeightedSumCustom.cpp src/Functions/src/factory/ActivationFactory.cpp src/Functions/src/factory/DefuzzifierFactory.cpp src/Functions/src/factory/FactoryManager.cpp src/Functions/src/factory/FunctionFactory.cpp src/Functions/src/factory/HedgeFactory.cpp src/Functions/src/factory/SNormFactory.cpp src/Functions/src/factory/TermFactory.cpp src/Functions/src/factory/TNormFactory.cpp src/Functions/src/hedge/Any.cpp src/Functions/src/hedge/Extremely.cpp src/Functions/src/hedge/HedgeFunction.cpp src/Functions/src/hedge/Not.cpp src/Functions/src/hedge/Seldom.cpp src/Functions/src/hedge/Somewhat.cpp src/Functions/src/hedge/Very.cpp src/Functions/src/imex/CppExporter.cpp src/Functions/src/imex/Exporter.cpp src/Functions/src/imex/FclExporter.cpp src/Functions/src/imex/FclImporter.cpp src/Functions/src/imex/FisExporter.cpp src/Functions/src/imex/FisImporter.cpp src/Functions/src/imex/FldExporter.cpp src/Functions/src/imex/FllExporter.cpp src/Functions/src/imex/FllImporter.cpp src/Functions/src/imex/Importer.cpp src/Functions/src/imex/JavaExporter.cpp src/Functions/src/imex/RScriptExporter.cpp src/Functions/src/norm/s/AlgebraicSum.cpp src/Functions/src/norm/s/BoundedSum.cpp src/Functions/src/norm/s/DrasticSum.cpp src/Functions/src/norm/s/EinsteinSum.cpp src/Functions/src/norm/s/HamacherSum.cpp src/Functions/src/norm/s/Maximum.cpp src/Functions/src/norm/s/NilpotentMaximum.cpp src/Functions/src/norm/s/NormalizedSum.cpp src/Functions/src/norm/s/SNormFunction.cpp src/Functions/src/norm/s/UnboundedSum.cpp src/Functions/src/norm/t/AlgebraicProduct.cpp src/Functions/src/norm/t/BoundedDifference.cpp src/Functions/src/norm/t/DrasticProduct.cpp src/Functions/src/norm/t/EinsteinProduct.cpp src/Functions/src/norm/t/HamacherProduct.cpp src/Functions/src/norm/t/Minimum.cpp src/Functions/src/norm/t/NilpotentMinimum.cpp src/Functions/src/norm/t/TNormFunction.cpp src/Functions/src/rule/Antecedent.cpp src/Functions/src/rule/Consequent.cpp src/Functions/src/rule/Expression.cpp src/Functions/src/rule/Rule.cpp src/Functions/src/rule/RuleBlock.cpp src/Functions/src/term/Activated.cpp src/Functions/src/term/Aggregated.cpp src/Functions/src/term/Bell.cpp src/Functions/src/term/Binary.cpp src/Functions/src/term/Concave.cpp src/Functions/src/term/Constant.cpp src/Functions/src/term/Cosine.cpp src/Functions/src/term/Discrete.cpp src/Functions/src/term/Function.cpp src/Functions/src/term/Gaussian.cpp src/Functions/src/term/GaussianProduct.cpp src/Functions/src/term/Linear.cpp src/Functions/src/term/PiShape.cpp src/Functions/src/term/Ramp.cpp src/Functions/src/term/Rectangle.cpp src/Functions/src/term/Sigmoid.cpp src/Functions/src/term/SigmoidDifference.cpp src/Functions/src/term/SigmoidProduct.cpp src/Functions/src/term/Spike.cpp src/Functions/src/term/SShape.cpp src/Functions/src/term/Term.cpp src/Functions/src/term/Trapezoid.cpp src/Functions/src/term/Triangle.cpp src/Functions/src/term/ZShape.cpp src/Functions/src/variable/InputVariable.cpp src/Functions/src/variable/OutputVariable.cpp src/Functions/src/variable/Variable.cpp src/Functions/src/Benchmark.cpp src/Functions/src/Complexity.cpp src/Functions/src/Console.cpp src/Functions/src/Engine.cpp src/Functions/src/Exception.cpp src/Functions/src/fuzzylite.cpp
    src/Functions/tsukamoto.h src/Functions/tsukamoto.cpp
    src/Functions/fuzzyexample.h src/Functions/fuzzyexample.cpp

)

qt_add_resources(FuzzyRTLSApp "configuration"
    PREFIX "/"
    FILES
        qtquickcontrols2.conf
)

target_link_libraries(FuzzyRTLSApp PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Qml
    Qt6::Quick
)

if (BUILD_QDS_COMPONENTS)
    include(${CMAKE_CURRENT_SOURCE_DIR}/qmlcomponents)
endif()

include(${CMAKE_CURRENT_SOURCE_DIR}/qmlmodules)

if (LINK_INSIGHT)
    include(${CMAKE_CURRENT_SOURCE_DIR}/insight)
endif ()

include(GNUInstallDirs)
install(TARGETS FuzzyRTLSApp
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
