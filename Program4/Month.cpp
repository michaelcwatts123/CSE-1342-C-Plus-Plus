//
//  Month.cpp
//  Program4
//
//  Created by Michael Watts on 3/29/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Month.hpp"
#include "Event.hpp"
#include "Time.hpp"
#include <string>
#include <algorithm>
using namespace std;

Month:: Month(string s){ //sets name of month
    Name = s;
    //if statements to determine number of days in month
    if (Name == "January" || Name == "March" || Name == "May" || Name == "July" || Name == "August" || Name == "December"){
        numDays = 31;
    }
    else if (Name == "February"){
        numDays = 28;
    }
    else{
        numDays = 30;
    }
    count = new int[numDays]; //count to moniter event number
    indexpointer = new Event[numDays]; //index pointer to link events
    eventArray= new  Event*[numDays]; //array holding event
    for(int i = 0; i < numDays; i++ ){ //loop to intialize all values
        eventArray[i] = new Event[10];
        indexpointer[i] = eventArray[i][0];
     
        count[i] = 0;
    }

    
    
}
void Month:: setDay(){ //sets day with time
    
    int x;
label1:  cout<< "Enter a day" << endl;
    cin >> x;
    if (x < 0 || x > numDays){
        cout<< "Invalid day. Try again\n"; //error checking
        goto label1;
        
    }
    day = x; //sets day to user input day
    t.setTime();
}
void Month:: setDay(int y){ //sets day with no time
    
    int x;
label1:  cout<< "Enter a day" << endl;
    cin >> x;
    if (x < 0 || x > numDays){
        cout<< "Invalid day. Try again\n";
        goto label1; //error checking
        
    }
    day = x;
    
}

int Month:: getDay(){
    return day; //returns day set
}
void Month:: dayArray(int dayOfTheMonth, string des){
    
    
   
    
   previous = indexpointer; //maintins previous pointed to event

    
    indexpointer[dayOfTheMonth-1] = eventArray[dayOfTheMonth-1][count[dayOfTheMonth-1]]; //sets pointer to new event
    
    
    indexpointer -> insert(des, t.getTime()); //inserts events
    eventArray[dayOfTheMonth-1][count[dayOfTheMonth-1]].insert(des, t.getTime()); //inserts events
    count[dayOfTheMonth-1] +=1; //increments counter
}
void Month::printArray(int dayOfTheMonth){
    Event * temp = &eventArray[dayOfTheMonth-1][0]; //pointer to first event
    
    for(int i = 0; i <9; i++){
        temp = &eventArray[dayOfTheMonth-1][i]; //increments pointer
      
        temp->printList(); //prints event information
    }
 
}
void Month::printArray(){
    for (int i = 0; i < numDays; i++){
        cout<< "Day " << i+1 << endl;
        for(int z = 0; z <10; z++){ //calls print event for day once per day for all the days in a month
           
            eventArray[i][z].printList();
            
        }
    }
}
void Month::sortTime(int x, int y){
    Event *eventArrayAM = new  Event[10];
    Event *eventArrayPM = new  Event[10];
    for (int i = 0; i<9; i++){
      
        if (eventArray[x][i].getTime()[6] == 'A'){
            eventArrayAM[i] = eventArray[x][i];
            
        }
        if (eventArray[x][i].getTime()[6] == 'P'){
            eventArrayPM[i] = eventArray[x][i];
        }
        else {
          
            
        }
            
    }
    
}
void Month::removeEvent(int day){
    printArray(day); //prints all arrays
    string time;
    cout<< "Enter the time for the event you would like to remove: \n";
    cin.ignore();
    getline(cin, time); //recieves time for even
    Event * temp = &eventArray[day-1][0]; //pointer to first event
    
    for(int i = 0; i <9; i++){ //loops through event list
        temp = &eventArray[day-1][i];
        
        if (temp ->getTime() == time){
            
            temp->insert("", ""); //clears information for selcted event
        }
    }
    
}
Month:: ~Month(){ //frees used memory
    delete [] eventArray;
    delete [] eventArray2;
}
