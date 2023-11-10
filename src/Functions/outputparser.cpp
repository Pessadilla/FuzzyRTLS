#include "outputparser.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

std::vector<std::string> OutputParser::ParseOutput(const std::string& output) {

    std::string input = output;
    std::istringstream iss(input);
    std::vector<std::string> tokens;

    std::string token;
    char delimiter1 = '/';
    char delimiter2 = '+';
    char delimiter3 = ' ';
    int i=0;
    while (std::getline(iss, token, delimiter1)) {
        std::istringstream substream(token);
        std::string subtoken;

        while (std::getline(substream, subtoken, delimiter2)) {
            std::istringstream subsubstream(subtoken);
            std::string subsubtoken;

            while (std::getline(subsubstream, subsubtoken, delimiter3)) {
                if(i % 3 == 0){
                    tokens.push_back(subsubtoken);
                }
                i++;
            }
        }
    }

//    for (const std::string& t : tokens) {
//        std::cout << t << std::endl;
//    }

    return tokens;

}

OutputParser::OutputParser()
{



}

