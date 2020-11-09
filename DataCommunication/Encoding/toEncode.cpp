//
// Created by Sefa on 7.11.2020.
//

#include "toEncode.h"

    void toEncode::nrzNormal(std::string toConvert) {
    std::cout<<toConvert;
    }

    void toEncode::nrzInvert(std::string toConvert) {

    int tempCounter = 2;

        for(int i = 0 ; i<toConvert.length() ; i++) {
           if (toConvert[i] == '1')
               tempCounter++;
           if (tempCounter % 2 == 0)
               std::cout << "1";
           else
               std::cout << "0";
        }
    }

    void toEncode::bipolarAmi(std::string toConvert) {
    std::cout<<"1 represents +ve -1 represents -ve"<<std::endl;
    int tempCounter = 1;
        for(int i = 0 ; i<toConvert.length() ; i++) {
            if (toConvert[i] == '1'){
                tempCounter++;
                if (tempCounter % 2 == 0)
                    std::cout << "1";
                else
                    std::cout << "-1";
            }
            else
                std::cout<<"0";
        }
    }

    void toEncode::pseudoternary(std::string toConvert) {
    std::cout<<"1 represents +ve -1 represents -ve"<<std::endl;
        int tempCounter = 1;
        for(int i = 0 ; i<toConvert.length() ; i++) {
            if (toConvert[i] == '0'){
                tempCounter++;
                if (tempCounter % 2 == 0)
                    std::cout << "1";
                else
                    std::cout << "-1";
            }
            else
                std::cout<<"0";
        }
    }
    void toEncode::manchester(std::string toConvert) {
        std::cout<<"0 represents by 10, 1 represents by 01"<<std::endl;

        for(int i = 0 ; i<toConvert.length() ; i++) {
            if (toConvert[i] == '0')
                std::cout << "10 ";
            else
                std::cout << "01 ";
        }

    }

    void toEncode::difManchester(std::string toConvert) {
    std::string tempHolder = "01";

        for(int i = 0 ; i<toConvert.length() ; i++) {
            if (toConvert[i] == '0')
                std::cout<<tempHolder<<" ";
            else
                if(tempHolder == "01"){
                    std::cout<<"10 ";
                    tempHolder="10";
                }
                else{
                std::cout<<"01 ";
                tempHolder="01";
                }
        }
    }

    void toEncode::b8zs(std::string toConvert) {
        std::cout<<"1 represents +ve -1 represents -ve"<<std::endl;
        int tempCounter = 1;


       for(int i = 0 ; i<toConvert.length() ; i++) {
            if(B8checker(toConvert,i) == false) {

                if (toConvert[i] == '1') {
                    tempCounter++;
                    if (tempCounter % 2 == 0)
                        std::cout << "1";
                    else
                        std::cout << "-1";
                } else
                    std::cout << "0";
            }
            else{
                i+=7;
                if (tempCounter%2 == 0)
                    scramPozB8();
                else
                    scramNegB8();
            }
        }
    }
    bool toEncode::B8checker(std::string toCheck, int iterator) {
        int tempCounter = 0;
        for(int i = iterator;i<(8+iterator);i++){
            if(toCheck[i] == '0'){
                tempCounter++;

                if(tempCounter == 8){
                    return true;
                }
            }
            else{
                tempCounter=0;
            }
        }
        return false;
    }

    void toEncode::scramNegB8() {
        std::cout<<"000-1+10+1-1";
    }

    void toEncode::scramPozB8() {
        std::cout<<"000+1-10-1+1";
    }

    void toEncode::hdb3(std::string toConvert) {
        std::cout<<"1 represents +ve -1 represents -ve"<<std::endl;
        int tempCounter = 1;


    }

    bool toEncode::HdbChecker(std::string toCheck,int iterator) {

        return false;
    }

    void toEncode::hdbPoz() {

    }
    void toEncode::hdbNeg() {

    }

