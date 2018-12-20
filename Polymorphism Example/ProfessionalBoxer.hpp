//
//  ProfessionalBoxer.hpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef ProfessionalBoxer_hpp
#define ProfessionalBoxer_hpp

#include <stdio.h>
#include "Boxer.hpp"
class ProfessionalBoxer : public Boxer {
public:
    ProfessionalBoxer(string Name, string Sponsor, int wins, int loses);
    void printSponsor();
private:
    string Sponsor;
};
#endif /* ProfessionalBoxer_hpp */
