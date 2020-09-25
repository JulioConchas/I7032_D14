#ifndef PROTOCOL_H_INCLUDED
#define PROTOCOL_H_INCLUDED

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   protocol.h
*/
#include <iostream>
using namespace std;

class Protocol{
private:
    string ethType [41];
    string str_protocol [41];

public:
    Protocol();
    string getProtocol(string);
};


#endif
