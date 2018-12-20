//
//  AmateurBoxer.cpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "AmateurBoxer.hpp"
AmateurBoxer:: AmateurBoxer(string Name, string Org, int wins, int loses): Boxer(Name, wins, loses){
    goldenGlovesAssociation = Org;
}
void AmateurBoxer:: printGoldenGlovesAssociation(){
    cout << "This boxer belongs to " << goldenGlovesAssociation << endl;
}
