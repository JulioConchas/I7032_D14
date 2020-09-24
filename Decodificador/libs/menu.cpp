#include "menu.h"

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   menu.cpp
*/

using namespace std;

void Menu::header(){
    system("clear");
    cout << "|========================================|" << endl;
    cout << "|               Julio Conchas.           |" << endl;
    cout << "|                 Muuk’Soft.             |" << endl;
    cout << "|    Analisis de Cabezera de Ethernet.   |" << endl;
    cout << "|                    v1.0                |" << endl;
    cout << "|========================================|" << endl;
    cout << "|                                        |" << endl;
    cout << "|       [1] Leer archivo                 |" << endl;
}
void Menu::printMenu(){
    cout << "|       [1] Leer archivo                 |" << endl;
    cout << "|       [7] Salit                        |" << endl;
}
void Menu::mainMenu(){
    int opt;
    string file;
    do{
        header();
        printMenu();
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Ingresa el nombre del archivo" << endl;
                cout << "Decodificador/files/";
                cin >> file;
            case 7:
                cout << "Exit!" << endl;
            default:
                cout << "Unknown option!" << endl;
        }
    }while(opt != 7);
    cout << "Bye, Bye!" << endl;
}
void Menu::enterToContinue(){
    printf("Presione [ENTER] para continuar ....");
    cin.get();
    getchar();
}
