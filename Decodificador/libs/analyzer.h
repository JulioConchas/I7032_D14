#ifndef ANALYZER_H_INCLUDED
#define ANALYZER_H_INCLUDED

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   analyzer.h
*/

#include <iostream>
#include <fstream>
#include "protocol.h"

using namespace std;

class Analyzer{
private:
    string file;
    string DAddress;
    string OAddress;
    string protocol;
    Protocol p_str;

    bool readFile(string);

    void setDestAddress(string);
    void setOriAddress(string);
    void setProtocol(string);

public:
    string getFile();
    string getDestAddress();
    string getOriAddress();
    string getProtocol();

    void setFile(string);

    void printData();
};


#endif
