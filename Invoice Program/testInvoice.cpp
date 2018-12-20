//
//  main.cpp
//  Invoice
//
//  Created by Michael Watts on 1/30/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;



int main() {
    Invoice myInvoice("1397", "Hammer", 100, 1250);
    cout<< myInvoice.getPartNumber()<<endl;
    cout<< myInvoice.getQuanity()<<endl;
    cout<< myInvoice.getPricePerIteam()<<endl;
    cout<< myInvoice.getPartDescription()<<endl;
    myInvoice.setQuanity(-1);
    myInvoice.setPricePerIteam(-1);
    cout<< myInvoice.getQuanity()<<endl;
    cout<< myInvoice.getPricePerIteam()<<endl;
    
    
}
