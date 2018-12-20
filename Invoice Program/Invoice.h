//
//  Header.h
//  Invoice
//
//  Created by Michael Watts on 1/30/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#ifndef Header_h
#define Header_h

using namespace std;

#endif /* Header_h */
class Invoice{
private:
    string partNumber;
    string partDescription;
    int quanity;
    int pricePerIteam;
public:
    Invoice(string ptNumber, string ptDescription, int number, int cost){
        partNumber = ptNumber;
        partDescription = ptDescription;
        setQuanity(number);
        setPricePerIteam(cost);
    };
    void setQuanity(int number){
        if (number < 0){
            number = 0;
        quanity = number;
        }
        else
            quanity = number;
    };
    void setPricePerIteam(int cost){
        if (cost >= 0)
            pricePerIteam = cost;
        else
            pricePerIteam = 0;
    };
    int getQuanity(){
        return quanity; 
    }
    int getPricePerIteam(){
        return pricePerIteam;
    };
    string getPartNumber(){
        return partNumber;
    };
    string getPartDescription(){
        return partDescription;
    };
    int getInvoiceAmount(){
       
        return quanity * pricePerIteam;
    };
};

