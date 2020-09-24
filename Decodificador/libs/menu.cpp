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

}
void Menu::printMenu(){
    cout << "|       [1] Leer archivo                 |" << endl;
    cout << "|       [7] Salit                        |" << endl;
}
void Menu::mainMenu(Analyzer &a){
    int opt;
    string file;
    do{
        header();
        printMenu();
        cin >> opt;
        switch (opt) {
            case 1:
                system("clear");
                header();
                cout << "| Ingresa el nombre del archivo          |" << endl;
                cout << "| Decodificador/files/";
                cin >> file;
                a.setFile(file);
                system("clear");
                header();
                a.printData();
                enterToContinue();
                break;
            case 7:
                cout << "Exit!" << endl;
                break;
            default:
                cout << "Unknown option!" << endl;
        }
    }while(opt != 7);
    cout << "Bye, Bye!" << endl;
}
void Menu::enterToContinue(){
    cout << "|                                        |" << endl;
    cout << "| Presione [ENTER] para continuar ....   |" << endl;
    cout << "|                                        |" << endl;
    cout << "|========================================|" << endl;
    cin.get();
    getchar();
}
