//
//  ShapeSaver.hpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef ShapeSaver_hpp
#define ShapeSaver_hpp
#include "Shape.hpp"
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
class ShapeSaver{
public:
    ShapeSaver();
    void set(Shape* s);
    void close();
private:
  
    ofstream MyFile;
    
};
#endif /* ShapeSaver_hpp */
