//
//  Boxer.hpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef Boxer_hpp
#define Boxer_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
class Boxer{
public:
    Boxer(string Name, int wins, int loses);
    void  printName();
    void printRecord();
private:
    string boxerName;
    int boxerWins;
    int boxerLoses;
    
};

#endif /* Boxer_hpp */
