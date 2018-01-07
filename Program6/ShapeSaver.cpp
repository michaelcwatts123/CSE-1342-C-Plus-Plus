//
//  ShapeSaver.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "ShapeSaver.hpp"
 ShapeSaver:: ShapeSaver(){
    MyFile.open("Shapes.txt"); //creates file
}
void ShapeSaver:: set(Shape* s){
    //MyFile.open("Shapes.txt");
    for(int x = 0; x < s->length; x++){
        MyFile << "\n";
        for(int y = 0; y < s->height; y++){
            MyFile << s->field[x][y]; //passes shape into file line by line
        }
    }
    //MyFile.close();
}
void ShapeSaver:: close(){
    MyFile.close(); //closes file
}
