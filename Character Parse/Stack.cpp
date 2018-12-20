//
//  Stack.cpp
//  Program5
//
//  Created by Michael Watts on 4/12/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>
#include <vector>
using namespace std;

Stack :: Stack(){
    vector<char>hold;
}
bool Stack :: operator+=(char c){
    hold.push_back(c);
    if (hold.back() == 'c'){
        return true;
    }
    else{
        cout << "Error on +="<< endl;
        return false;
    }
    
}
bool Stack :: operator -=(char c){
    if (c == ')'){
        if (hold.back() == '('){
            hold.pop_back();
            return true;
        }
        else{
            return false;
        }
    }
    if (c == '}'){
        if (hold.back() == '{'){
            hold.pop_back();
            return true;
        }
        else{
            return false;
        }
    }
    if (c == ']'){
        if (hold.back() == '['){
            hold.pop_back();
            return true;
        }
        else{
            return false;
        }
    }
    if (c == ' '){
        if (hold.empty()){
            return true;
        }
        else{
            return false;
        }
    }
    else {
        cout << "Error on -="<< endl;
        return false;
    }
}
