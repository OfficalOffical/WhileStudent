//
// Created by Sefa on 7.11.2020.
//

#ifndef ENCODING_TOENCODE_H
#define ENCODING_TOENCODE_H

#include <iostream>
#include <string.h>

class toEncode {
private:
    static bool B8checker(std::string toCheck, int iterator);
    static void scramNegB8();
    static void scramPozB8();
    static bool HdbChecker(std::string toCheck, int iterator);
    static void hdbPoz();
    static void hdbNeg();


public:
    static void nrzNormal(std::string toConvert);
    static void nrzInvert(std::string toConvert);//starting from 1
    static void bipolarAmi(std::string toConvert);
    static void pseudoternary(std::string toConvert);
    static void manchester(std::string toConvert);
    static void difManchester(std::string toConvert);
    static void b8zs(std::string toConvert);
    static void hdb3(std::string toConvert);
};


#endif //ENCODING_TOENCODE_H
