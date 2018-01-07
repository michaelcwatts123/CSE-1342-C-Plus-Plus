//
//  ShapeBuilder.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "ShapeBuilder.hpp"
#include "Shape.hpp"
#include "Circle.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "ShapeSaver.hpp"

using namespace std;
void ShapeBuilder:: run(){
    ShapeSaver ss;
    string choice;
    while(true){
        Shape *ptr; //pointer to base class
    cout << "What kind of shape would you like to build?\nEnter c for circle. \nEnter r for rectangle.\nEnter t for isosceles triangle." << endl;
        char choice;
        cin >> choice;
        
        switch(choice){ //determines user choice
         
            case 't':{
                cout << "You have selected triangle\n";
                Triangle t; //creates new triangle object
                ptr = &t; //points shape pointer to object
                ptr -> build(); //builds object
                cout << "\n";
                cout << "Do you want to save this shape: (y for yes)\n";
                cin >> choice;
                if (choice == 'y'){
                     ss.set(ptr); //passes field to shape saver
                }
                
                ptr->end(); //deletes object
                }
                break;
            case 'c':{
                cout << "You have selected circle\n";
                Circle c; //creates new circle object
                ptr = &c; //points shape pointer to object
                ptr -> build(); //builds object
                cout << "Do you want to save this shape: (y for yes)\n";
                cin >> choice;
                if (choice == 'y'){
                    ss.set(ptr); //passes field to shape saver
                }
                ptr->end();} //deletes object
                break;
            case 'r':{
                cout << "You have selected rectangle\n";
                Rectangle r; //creates new rectangle object
                ptr = &r; //points shape pointer to object
                ptr -> build(); //builds object
                cout << "Do you want to save this shape: (y for yes)\n";
                cin >> choice;
                if (choice == 'y'){
                    ss.set(ptr); //passes field to shape saver
                }
                ptr->end();} //deletes object
                break;
            default:
                cout << "Error";
        }
    cout << "Would you like to keep going? (y for yes)\n";//prompts the user to continue
        cin >> choice;
        if(choice == 'y'){
            
        }
        else{
            cout << "Goodbye\n";
            
            
            break;
        }
    }
}
