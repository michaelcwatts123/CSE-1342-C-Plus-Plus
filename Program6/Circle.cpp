//
//  Circle.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Circle.hpp"
#include <iostream>
using namespace std;
void Circle:: build(){
    while(true){
        cout << "Enter the diameter (between 1-80) of the circle:\n"; //gets user details
        cin >> length;
        if (length >= 1 && length <= 80){ //error checking
            break;
        }
        else{
            cout << "Invalid enteries, try again\n";
        }
    }
    
    field = new char*[length]; //creates field to user specs
    for(int i = 0; i < length; i++){
        field[i] = new char[length];
    }
    for(int x = 0; x < length; x++){
        for(int y = 0; y < length; y++){
            field[x][y] = ' '; //fills field
        }
    }
    int h = length/2; //calculates radius
    for(int x = 0; x < length; x++){
        for(int y = 0; y < length; y++){
            if((x-h)*(x-h) + (y-h)*(y-h) <= h*h){ //equation of a circle
                field[x][y] = 'x'; //populates circle with x's
            }
        }
    }
    for(int x = 0; x < length; x++){
        cout << "\n";
        for(int y = 0; y < length; y++){
            cout << field[x][y]; //prints field
        }
    }
    cout << "\n";
    height = length;


}
/*
void Circle:: end(){
    delete [] field; //frees up memory
    
}
 */
