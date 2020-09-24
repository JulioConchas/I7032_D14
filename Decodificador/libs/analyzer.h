#ifndef ANALYZER_H_INCLUDED
#define ANALYZER_H_INCLUDED

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   analyzer.h
*/
class Analyzer{
private:
    string file;
    string DAddress;
    string OAddress;
    string protocol;

public:
    string getFile();
    string getDestAddress();
    string getOriAddress();
    string getProtocol();

    void setFile(string);
};


#endif
