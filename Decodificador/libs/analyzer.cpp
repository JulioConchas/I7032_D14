#include "analyzer.h"

/*
* Author: Julio Conchas
* Email:  conchasjimenez@gmail.com
* Path:   libs/
* File:   analyzer.cpp
*/

//private

bool Analyzer::readFile(string f){
    fstream myFile;
    char c;
    bool flag = true,flagDA = false, flagOA = false;
    int flagBits = 0, flagDigits = 0;
    string aux;

    myFile.open("../files/"+f,fstream::in);
    if (myFile.good()){
        if (myFile.is_open()){
            do{
                c = myFile.get();
                if (flagBits == 2) {
                    if(flagDigits == 5){
                        if (!flagDA) {
                            setDestAddress(aux);
                            flagDA=true;
                            flagBits++; // same
                        }
                        else if (!flagOA) {
                            setOriAddress(aux);
                            flagOA=true;
                        }
                        aux = c;
                        flagBits--;
                        flagDigits=0;
                    }
                    else{
                        aux = aux + ':' + c;
                        flagDigits++;
                    }
                    flagBits--;
                }
                else{
                    aux = aux + c;
                    //cout << "data_test: "+aux << endl;
                    flagBits++; // same
                }
            }while(!myFile.eof() && !flagOA );
        }
        else{
            cout << "ERROR,read(): file is not open\n";
            flag = false;
        }
    }
    else{
        cout << "ERROR,read(): file is not good\n";
        flag = false;
    }
    myFile.close();
    return flag;
}
void Analyzer::setDestAddress(string da){ DAddress = da; }
void Analyzer::setOriAddress(string oa){ OAddress = oa; }
// public
string Analyzer::getFile(){ return file; }
string Analyzer::getDestAddress(){ return DAddress; }
string Analyzer::getOriAddress(){ return OAddress; }
string Analyzer::getProtocol(){ return protocol; }

void Analyzer::setFile(string f){ file = f; }

void Analyzer::printData(){
    if (readFile(file)) {
        cout << "| Direcciones MAC                        |" << endl;
        cout << "|   Destino: "+getDestAddress()+"           |" << endl;
        cout << "|    Origen: "+getOriAddress()+"           |" << endl;
    }
    else{
        cout << " Error: no se pudo leer el archivo" << endl;
    }
}
