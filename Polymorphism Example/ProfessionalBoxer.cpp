//
//  ProfessionalBoxer.cpp
//  LabQuiz6
//
//  Created by Michael Watts on 4/19/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include "ProfessionalBoxer.hpp"
ProfessionalBoxer:: ProfessionalBoxer(string Name, string Org, int wins, int loses): Boxer(Name, wins, loses){
    Sponsor = Org;
}
void ProfessionalBoxer:: printSponsor(){
    cout << "This boxer is licensed by " << Sponsor << endl;
}
