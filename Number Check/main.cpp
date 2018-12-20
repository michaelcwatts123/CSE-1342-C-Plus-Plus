//
//  main.cpp
//  Program1
//
//  Created by Michael Watts on 2/5/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include <iostream>
using namespace std;
void isPrime(int number); //determines if prime
int reverse(int number); //flips number
int main(int argc, const char * argv[]) {
    int holder{0}; //controls if the menu is redisplayed
    do { //displays the menu
    cout << "Welcome to my first program!  Please choose one of the menu choices below:\n";
    cout << "1.     Check if a number is prime\n";
    cout << "2.     Reverse display a number\n";
    cout << "3.     Check if the reverse of a number is prime\n";
    cout << "4.     Quit\n";
    cout << "Enter choice: ";
    int choice{0};
    cin >> choice; //recieves choice from user
        switch(choice){ //slects and preforms menu options
            case 2: {
                cout << "Enter a number greater than 0 to reverse: ";
                int reversenum{0};
                cin >> reversenum; //recieves the sum to reverse
                reversenum = reverse(reversenum); //feeds it to a function to reverse it
                cout << "The number reversed is: " << reversenum << endl; //prints the reversed number
                break;
            }
            case 3: {
                cout << "Enter a number greater than zero: ";
                int reversenum{0};
                cin >> reversenum; //recieves a sum to reverse
                reversenum = reverse(reversenum); //reverse sum
                cout << "The number reversed is: " << reversenum << endl; //prints reversed number
                isPrime(reversenum); //checks if reversed number is prime
                break;
            }
            case 4: {
                cout << "Goodbye!\n"; //prints a goodbye messeage
                holder = 1; //ends the program loop
                break;
            }
            case 1:{
                int number{0};
                cout<<"Enter a number greater than zero: ";
                cin >> number; //recieves input from program
                isPrime(number); //checks if prime
                
                break;
            }
                };
           
             
        
    } while (holder == 0); //loops menu
    return 0;
}
void isPrime(int number){
   
    if (number <= 0) //checks value to make sure it is valid
        cout << "Invalid entry";
    else { //checks conditions to determine if prime
        if (number == 2)
            cout << "The number is prime\n";
        if (number % 2 == 0)
            cout << "The number is not prime\n";
        if (number == 1)
            cout << "The number is not prime\n";
        if (number % 2 != 0)
            cout << "The number is prime\n";
        

    }
   
}
int reverse(int number){
    int reversed{0};
    while (number != 0){ //loops through number reversing it digit by digit
        reversed *= 10;
        reversed = reversed + number % 10;
       number = number/10;
    }
    return reversed; //returns reversed number
}
