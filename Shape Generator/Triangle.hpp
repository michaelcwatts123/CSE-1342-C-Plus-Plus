//
//  Triangle.hpp
//  Program6
//
//  Created by Michael Watts on 4/23/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Shape.hpp"
class Triangle: public Shape{
public:
    void build();
    void end();
};
#endif /* Triangle_hpp */
