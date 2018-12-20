//
//  Triangle.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Triangle.hpp"
#include <iostream>
using namespace std;
void Triangle :: build(){
    
    while(true){
        cout << "Enter the edge size (between 1-80) of the triangle:\n"; //prompts user for demensions
        cin >> height;
        if (height >= 1 && height <= 80){ //error checking
            break;
        }
        else{
            cout << "Invalid enteries, try again\n";
        }
    }

    field = new char*[height]; //creates field of user size/2
    for(int i = 0; i < height; i++){
        field[i] = new char[height];
    }
    
   
    for(int x = 0; x < height; x++){ //fills field with blanks
        for(int y = 0; y < height; y++){
            field[x][y] = ' ';
        }
    }
    double a = 0;
    double b = height-1;
    for(int x = height-1; x > 0 ; x--){
        for(int y = 0; y < height; y++){
            int left = a;
            int right = b;
            if (y >= left && y <= right){ //increments and decrememnts each side
                field[x][y] = 'x';
            }
           
        
      
            
             
        }
        a+= .5;
        b-= .5;
    }
    for(int x = 0; x < height; x++){ //prints triangle
        cout << "\n";
        for(int y = 0; y < height; y++){
            cout << field[x][y];
        }
    }
    cout << "\n";
    length = height; //sets memeber data 
    
   // cout << length << "H:" << height;
    

}
/*
void Triangle:: end(){
    delete [] field; //frees memory
    
}
 */
