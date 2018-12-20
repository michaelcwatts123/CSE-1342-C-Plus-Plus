//
//  Event.hpp
//  Program4
//
//  Created by Michael Watts on 3/28/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
// header file, contains neccesary methods and variables for Event

#ifndef Event_hpp
#define Event_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
struct node{
    string description;
    string time;
    node * next;
    
    
};
class Event{
private:
    
    node * base;
    node * dayEvent;
  
    string description;
    string time;
    int ind;
   
public:
    
    Event *next;
    Event();
    Event(string s, string stime);
    void setNode(string s, string stime);
    void setBase();
    void insert( string dayDescription, string dayTime);
    void remove(int postion);
    void printList( );
    string getTime();
    
};
#endif /* Event_hpp */
