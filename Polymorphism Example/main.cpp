//
//  main.cpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include <iostream>
#include "ProfessionalBoxer.hpp"
#include "AmateurBoxer.hpp"

int main(int argc, const char * argv[]) {
    ProfessionalBoxer pb("Clubber Lang", "Nevada State Athletic Commission", 32, 2);
    pb.printName();
    pb.printRecord();
    pb.printSponsor();
    
    AmateurBoxer ab("Billy Bass","New York Golden Gloves", 2, 4);
    ab.printName();
    ab.printRecord();
    ab.printGoldenGlovesAssociation();
    
    return 0;

}
