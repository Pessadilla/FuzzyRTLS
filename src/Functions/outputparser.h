#ifndef OUTPUTPARSER_H
#define OUTPUTPARSER_H
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class OutputParser
{
public:
    OutputParser();

    static std::vector<std::string>ParseOutput(const std::string& output);
};

#endif // OUTPUTPARSER_H
