//
//  Shape.hpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
//#include "ShapeSaver.hpp"
class Shape{
public: //memeber data of shape
    char ** field;
    int length;
    int height;
    char choice;
   // ShapeSaver ss;
//public:
    //virtual functions
    virtual void build() = 0;
      void end();
};
#endif /* Shape_hpp */
