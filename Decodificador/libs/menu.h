#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   menu.h
*/

#include <iostream>

class Menu{
private:
    void header();
public:
    void printMenu();
    void mainMenu();
    void enterToContinue();
};


#endif
