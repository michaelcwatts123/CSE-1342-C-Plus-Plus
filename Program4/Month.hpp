//
//  Month.hpp
//  Program4
//
//  Created by Michael Watts on 3/29/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
// header file, contains neccesary methods and variables for Month

#ifndef Month_hpp
#define Month_hpp

#include <stdio.h>
#include <string>
#include "Time.hpp"
#include "Event.hpp"
using namespace std;
class Month{
private:
    string Name;
    unsigned int numDays;
    unsigned int day;
    Time t;
    Event * indexpointer;
    Event * previous;
    Event **eventArray;
    Event **eventArray2;
    int * count;
    string *storage;
    int counter;
public:
    
    Month(string s);
    ~Month();
    void setDay();
    int getDay();
    void setDay(int x);
    void dayArray(int dayOfTheMonth, string des);
    void printArray(int dayOfTheMonth);
    void printArray();
    void removeEvent(int day);
    void sortTime(int x, int y);
};
#endif /* Month_hpp */
