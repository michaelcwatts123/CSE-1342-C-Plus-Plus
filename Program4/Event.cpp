//
//  Event.cpp
//  Program4
//
//  Created by Michael Watts on 3/28/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Event.hpp"
//#include "LinkedList.hpp"
#include "Month.hpp"
Event:: Event(){ //default constructor
   
    base = new node; //base node for head
    dayEvent = new node; //event node
    
    base -> next = 0; //sets to null
    base -> description = ""; //sets description to node
    base -> time = ""; //sets description to node
    base -> next = dayEvent; //moves pointer to point to next even
   
     
    
     
}
Event:: Event(string d, string t){
    description = d; //sets event description
    time = t; //sets event time
}
void Event::setNode(string s, string stime){
    dayEvent -> description = s; //sets node information for description
    dayEvent -> time = stime; //sets node information for description
    
    
}
void Event::setBase(){ //sets defualt base values
    base -> next = 0;
    base -> description = "List of Events";
    base -> time = "";
}
void Event:: insert(string dayDescription, string dayTime){
    
    

    
    
    
    
    
    
    
    description = dayDescription; //sets passed in descrptiton to descrption
    time = dayTime; //sets passed in time to time
   
}
void Event:: printList( ){ //prints out event information

    
    
    
    if (time == ""){ //passes by blank events
        
    }
    else{
    cout << "Time: " << time << endl; //prints time
    cout << "Event: " << description << endl; //prints event description
    }
}
string Event::getTime(){
    return time; //returns time string
}
