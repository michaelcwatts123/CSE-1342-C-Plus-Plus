//
//  Boxer.cpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Boxer.hpp"
Boxer:: Boxer(string Name, int wins, int loses){
    boxerName = Name;
    boxerWins = wins;
    boxerLoses = loses;
}
void Boxer ::  printName(){
    cout << "The boxer's name is: " << boxerName << endl;
}
void Boxer:: printRecord(){
    cout << "The boxer has " << boxerWins << " wins and " << boxerLoses << " loses" << endl;
}
