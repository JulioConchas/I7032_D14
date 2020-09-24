#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   menu.h
*/

#include <iostream>
#include "analyzer.h"

class Menu{
private:
    void header();
public:
    void printMenu();
    void mainMenu(Analyzer&);
    void enterToContinue();
};


#endif
