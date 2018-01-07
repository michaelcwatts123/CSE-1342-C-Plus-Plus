//
//  Stack.hpp
//  Program5
//
//  Created by Michael Watts on 4/12/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class Stack{
private:
    char x;
    vector<char> hold;
public:
    Stack();
    bool operator +=(char c);
    bool operator -=(char c);
};


#endif /* Stack_hpp */
