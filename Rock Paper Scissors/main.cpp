//
//  main.cpp
//  Program2
//
//  Created by Michael Watts on 2/20/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
// This is a program designed to simulate numerous games of Rock Paper Scissors

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
using namespace std;
void playGame(int& Awin, int& BWin, int& tie, char bChoice, char aChoice); //function to play one game of Rock Paper Scissors
void playGame(int& rCount, int& sCount, int& pCount, char aChoice);
void playGame(double a, double b, double c);
class RanNum{
    int randNum;
    int randNum2;
public: void setRanNum(int x){
    randNum = x;
}
public: void setRanNum2(int x){
    randNum2 = x;
}
public: int getRanNum(){
    return randNum;
}
public: int getRanNum2(){
    return randNum2;
}
};
int main(int argc, const char * argv[]) {
    int  sCount, pCount, rCount, Awin, Bwin, tie, gameNumber; //variables used to keep count of how often A plays a move, the amount A wins, B Wins, and they tie. The number of games
    Bwin = 0;
    Awin = 0;
    tie = 0;
    char bias = 'r'; //the intial bias value for a
    char aChoice, bChoice, nonBias, nonBias2; //variables for A and B's choices
    double biasPercent; //the percentage biased
    int check = 0;
    cout << "Welcome to the rock paper scissors simulator!\n How many games would you like to simulate: ";
    cin>> gameNumber;
    if (gameNumber <= 0){ //confirms a postive number of games
        cout<< "Error, simulation number cannot be less than one. Try again: ";
        cin >> gameNumber; //recieves the number of games
    }
    
    do{ //loop for setting bias
        cout << "Enter the weapon A will be bias towards (r/p/s): ";
        cin >> bias;
        switch (bias){ //assigns bias and nonbias values
            case 'r':{
                bias = 'r';
                nonBias = 's';
                nonBias2 = 'p';
                cout << "Enter a bias from 0 to 1: ";
                cin >> biasPercent;
                if (biasPercent > 1 || biasPercent < 0){
                    cout << "Error, must be between 1 and 0. Try again: ";
                    cin >> biasPercent;
                }
                else
                    check = 1;
                break;
            }
            case 's':{
                bias = 's';
                nonBias2 = 'p';
                nonBias = 'r';
                cout << "Enter a bias from 0 to 1: ";
                cin >> biasPercent;
                if (biasPercent > 1 || biasPercent < 0){
                    cout << "Error, must be between 1 and 0. Try again: ";
                    cin >> biasPercent;
                }
                else
                    check = 1;
                break;
                
            }
            case 'p':{
                bias = 'p';
                nonBias = 'r';
                nonBias2 = 's';
                cout << "Enter a bias from 0 to 1: ";
                cin >> biasPercent;
                if (biasPercent > 1 || biasPercent < 0){
                    cout << "Error, must be between 1 and 0. Try again: ";
                    cin >> biasPercent;
                }
                else
                    check = 1;
                break;
                
            }
            default: //input error
                cout << "Input error, try again\n";
                break;
        }
        
    } while (check ==0);
    srand(static_cast<unsigned int>(time(0))); //seeds random number generator
    int randNum = (rand() % 100);
    int randNum2 = (rand() % 100);
    for (int counter =1; counter <= gameNumber; counter++){ //loop to play the game till gameNumber is reached
        RanNum x =  RanNum();
        int randNum = (rand() % 100);
        int randNum2 = (rand() % 100);
        x.setRanNum(randNum);
        x.setRanNum2(randNum2);
        x.getRanNum(); //random value to determine if bias is used
        x.getRanNum2(); //random number to determine which unbiased option is picked
        
        if (x.getRanNum() <= (biasPercent * 100)){ //uses bias
            aChoice = bias;
            
            
        }
        else { //uses one of the unbias values
            
            
            
            if (x.getRanNum2() <= 50){
                aChoice = nonBias;
                
            }
            else {
                aChoice = nonBias2;
                
            }
        }
        playGame(rCount,sCount,pCount,aChoice);
        
        
        
        if (rCount >= pCount && rCount >= sCount){
            bChoice = 'p';
        }
        if (pCount >= sCount && pCount >= rCount){
            bChoice = 's';
        }
        if (sCount >= pCount && sCount >= rCount){
            bChoice = 'r';
        }
        else{
            bChoice = 'r';
            
        }
        //sets B's choice to counter the option A uses the most
        
        
        playGame(Awin, Bwin, tie, bChoice, aChoice); //function to play one round
    }
    
    double AwinPercent = (((double)Awin/(double)gameNumber) * 100 );
    double BwinPercent = (((double)Bwin/(double)gameNumber) * 100 );
    double tiePercent = (((double)tie/(double)gameNumber) * 100 );
    
    playGame(AwinPercent,BwinPercent,tiePercent);
    
}
void playGame(double a, double b, double c){
    printf("Player A won %.2f Percent of the time\n", a);
    printf("Player B won %.2f Percent of the time\n", b);
    printf("The game tied %.2f Percent of the time\n", c);
    
    //shows percentage of wins and ties for each player
}
void playGame(int& rCount, int& sCount, int& pCount, char aChoice){
    switch (aChoice){ //keeps track of how often A uses each option
        case 'r':{
            ++rCount;
            break;
            
        }
        case 's':{
            ++sCount;
            break;
            
        }
        case 'p':{
            ++pCount;
            break;
            
        }
        default: {
            cout << "Something went terribly wrong\n";
            break;
        }
    }
}
void playGame(int& Awin, int& BWin, int& tie, char bChoice, char aChoice){ //function plays one round of the game
    
    switch (aChoice){ //determines who wins by A's choice vs B's and increments win or tie counters
        case 'p':{
            if (bChoice == 'r'){
                ++Awin;
            }
            if (bChoice == 's'){
                ++BWin;
            }
            if (bChoice == 'p'){
                ++tie;
            }
            break;
        }
        case 'r':{
            if (bChoice == 'r'){
                ++tie;
            }
            if (bChoice == 's'){
                ++Awin;
            }
            if (bChoice == 'p'){
                ++BWin;
            }
            break;
        }
        case 's':{
            if (bChoice == 'r'){
                ++BWin;
            }
            if (bChoice == 's'){
                ++tie;
            }
            if (bChoice == 'p'){
                ++Awin;
            }
            break;
        }
        default:{ //error check
            cout << "This is not good";
            break;
        }
    }
}
