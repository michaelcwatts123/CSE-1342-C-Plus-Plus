//
//  main.cpp
//  Program4
//
//  Created by Michael Watts on 3/22/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
// creates the month object and recievies the selections and inputs from the user for the menu

#include <iostream>
#include <string>
#include "Month.hpp"
using namespace std;
int recursiveFunction(int count){ //recursive function which dispalys goodbye message
    if (count == 0){ //stopping condition
        cout << "Thank You\n"; //goodbye message
        return 0;
    }
    return recursiveFunction(count -1); //recursive call
}
int main(int argc, const char * argv[]) {
   
    string months[12] = {"January", "Febuary", "March", "April", "May","June","July","August","Septemeber", "October", "November", "Decemeber"}; //array of month names
    int choice; //month choice
    

    string description = ""; //defualt event description
    for(int i = 0; i < 12;i++){ //loop to display all months
        if (i <= 8)
        cout << i+1 << " : " << months[i] << endl; //display all months
        else //formatting change
            cout << i+1 << ": " << months[i] << endl;
    }
    cout << "Select a month number: ";
    cin >> choice; //recieves user selection of month
    Month m = Month(months[choice-1]); //sets month class month to be user selected month
    while(true){ //infinte menus loop
        int userChoice = 0;
        cout << "Event Calender for the month of " << months[choice-1] << endl;
        cout << "(1) Create an Event" << endl;
        cout << "(2) Delete an Event" << endl;
        cout << "(3) Display all the events for a day" << endl;
        cout << "(4) Display all the events for a month" << endl;
        cout << "(5) Exit program" << endl;
        cout << "Enter your choice: " ;
        cin >> userChoice;
        switch (userChoice){ //determines menu option selection
            case 1:
                m.setDay(); //sets the day of the month for the events
                
                cout << "Enter a description for the event:\n";
                cin.ignore();
                getline(cin, description); //recives event descroption
                
                m.dayArray(m.getDay(), description); //passes day and descritpion to month object
                
                
                
                break;
            case 2:
                m.setDay(0); //selects the day from the user
                m.removeEvent(m.getDay()); //removes the event from that day
                break;
            case 3:
                m.setDay(0); //selects the day from the user
                
                m.printArray(m.getDay()); //prints the events for a day from the user
                
                break;
            case 4:
                m.printArray(); //prints all events for the month
            case 5:
                recursiveFunction(5); //calls the recursive function to display end message
                exit(0);
            default: //error catching
                cout<< "Error\n";
                
                break;
           
        }
        
    }
    
}

