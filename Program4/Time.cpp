//
//  Time.cpp
//  Program4
//
//  Created by Michael Watts on 3/28/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Time.hpp"
#include <iostream>

using namespace std;


void Time::setTime(){ //function to set the time value 
label: cout << "On what hour would you like the event(1-12): ";
    cin >> hour; // receives the hour
    if (hour < 1 || hour > 12){
        cout << "Invalid time\n"; //error checking
        goto label;
    }
label1: cout << "On what minute would you like the event(0-59): ";
    cin >> min; //recieves minute
    if (min < 0 || min > 59){
        cout << "Invalid time\n"; //error checking
        goto label1;
    }
label2: cout << "On what period would you like the event(1 for AM, 2 for PM): ";
    cin >> indicator; //recieves AM and PM
    if (indicator < 1 || indicator > 2){
        cout << "Invalid Choice\n"; //error checking
        goto label2;
    }
    
}
int Time::getIndicator(){ //returns if code is for morning or night
    return indicator;
}
string Time::getTime(){
        string s = "";
        string h;
        string m;
        if(indicator == 1){ //determines if AM or PM
            if(hour < 10){
            string temp = to_string(hour); //turns int into string
            h = "0"; //adds a zero to one int times
                h.append(temp); //adds int string to string
            }
            else {
               h = to_string(hour);
            }
            if(min < 10){
                string temp = to_string(min);
                m = "0"; //adds a zero to one int times
                m.append(temp); //adds int string to string

            }
            else {
                m = to_string(min);
            }
           
            
            s = h + ":" + m + " AM"; //combines time
            
            return  s;
        }
        if (indicator == 2){
            
            if(hour < 10){
                string temp = to_string(hour);
                h = "0"; //adds a zero to one int times
                h.append(temp); //adds int string to string

            }
            else {
                h = to_string(hour);
            }
            if(min < 10){
                string temp = to_string(min);
                m = "0"; //adds a zero to one int times
                m.append(temp); //adds int string to string

            }
            else {
                m = to_string(min); //adds int string to string

            }
            
            
            s = h + ":" + m + " PM"; //combines time
            
            return  s; //retinrs final time as string
        }
        else{
            return NULL; //error checking
        }
    }
;
