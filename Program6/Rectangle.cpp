//
//  Rectangle.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Rectangle.hpp"
#include <iostream>
using namespace std;
void Rectangle::  build(){
    while(true){
        cout << "Enter the length (between 1-80) of the rectangle:\n"; //gets user demensions
        cin >> length;
        cout << "Enter the height (between 1-80) of the rectangle:\n"; //gets user demensions
        cin >> height;
        if (height >= 1 && height <= 80 && length >= 1 && length <= 80){ //error checking
            break;
        }
        else{
            cout << "Invalid enteries, try again\n";
        }
    }
    field = new char*[height]; //creates field of user demesnions
    for(int i = 0; i < height; i++){
        field[i] = new char[length];
    }
    for(int x = 0; x < height; x++){ //fills field with x's
        for(int y = 0; y < length; y++){
            field[x][y] = 'x';
        }
    }
    for(int x = 0; x < height; x++){ //prints field
        cout << "\n";
        for(int y = 0; y < length; y++){
            cout << field[x][y];
        }
    }
    cout << "\n";
 

}
/*
void Rectangle:: end(){
    delete [] field; //frees memory
    
}
 */
