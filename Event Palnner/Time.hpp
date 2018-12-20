//
//  Time.hpp
//  Program4
//
//  Created by Michael Watts on 3/28/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//  header file, contains neccesary methods and variables for Time
#include <string>
#ifndef Time_hpp
#define Time_hpp
using namespace std;
class Time{
private:
    int hour;
    int min;
    int indicator;
public:
    void setTime();
    int getIndicator();
    string getTime();
    
};

#endif /* Time_hpp */
