//
//  Shape.cpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "Shape.hpp"
#include <iostream>
using namespace std;
void Shape:: end(){
    
    //cout<<"Hey";
    for(int i = 0; i < height; i++){
        delete [] field[i];
    }
    delete [] field;
    //cout<<"bye";
}
