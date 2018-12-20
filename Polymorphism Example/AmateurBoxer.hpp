//
//  AmateurBoxer.hpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef AmateurBoxer_hpp
#define AmateurBoxer_hpp

#include <stdio.h>
#include "Boxer.hpp"
class AmateurBoxer : public Boxer {
public:
    AmateurBoxer(string Name, string Org, int wins, int loses);
    void printGoldenGlovesAssociation();
private:
    string goldenGlovesAssociation;
};

#endif /* AmateurBoxer_hpp */
