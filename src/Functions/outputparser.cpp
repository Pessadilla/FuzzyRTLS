#include "outputparser.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

//void parseOutput(const std::string& output, double& tutarsiz, double& cokDusuk, double& dusuk, double& normal, double& yuksek) {


//}

OutputParser::OutputParser()
{

    std::string data = "0.000/Tutarsiz + 0.000/CokDusuk + 0.000/Dusuk + 0.000/Normal + 0.286/Yuksek";

    std::string input = "0.000/Tutarsiz + 0.000/CokDusuk + 0.000/Dusuk + 0.000/Normal + 0.286/Yuksek";
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

    for (const std::string& t : tokens) {
        std::cout << t << std::endl;
    }

}

