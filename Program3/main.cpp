//
//  main.cpp
//  Program3
//
//  Created by Michael Watts on 3/3/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//  This code runs a two player connect 4 game

#include <iostream>
using namespace std;
class Connect4{
    public:  void beginGame(){
        char board [9] [7]; //array to hold board
        int gameEnd = 0; //win condition
        int gameEnd2 = 0; //win condition
        int player1, player2; //two players
        int postion; //holds row postion of player's selection
        for(int i = 0; i < 9; i++){ //loop to fill the array with empty spaces
            for(int j = 0;j<7;j++){
                board[i][j] = ' ';
                
                
            }
        }

        cout<< "Welcome to Connect 4!\n";
        displayBoard(board); //calls function to display board
        while (gameEnd == 0){ //loop to continue until win condition is met
            cout<< "Player 1, chose a column (1-7): ";
            cin >> player1; //player 1's column choice
            while (player1 <1 || player1 > 7){ //error checking on selection
                cout<< "Invalid choice, try again\n";
                cout<< "Player 1, chose a column (1-7): ";
                cin >> player1;
                
            }
            do{
                if (player1 == -1){ //error checking on player 1's input
                    cout<< "Player 1, chose a column (1-7): ";
                    cin >> player1;
                }
                 postion = columnCheck(board, player1, 'x'); //function to place slection on board and store row number of choice
            }while(player1 == -1);
            displayBoard(board);
            
            gameEnd = check(board,player1, 'x', postion); //checks win condition
            
            if (gameEnd == 0){ //determines if second win condition should be checked
                
            gameEnd2 = diagonalcheck(board,player1, 'x', postion); //checks second win condtion
            }
             
            if (gameEnd == 1){
                break; //breaks loop if win condition met
            }
            if (gameEnd2 == 1){
                break; //breaks loop if win condition met
            }
            
            
            
            
            
            
            
            //same functions all repeated for player 2
            
            cout<< "Player 2, chose a column (1-7): ";
            cin >> player2;
            while (player2 <1 || player2 > 7){
                cout<< "Invalid choice, try again\n";
                cout<< "Player 2, chose a column (1-7): ";
                cin >> player2;
                
            }
            do{
                if (player2 == -1){
                    cout<< "Player 2, chose a column (1-7): ";
                    cin >> player2;
                }
                postion = columnCheck(board, player2, 'o');
            }while(player2 == -1);
            displayBoard(board);
            
            gameEnd =check(board,player2, 'o', postion);
            if (gameEnd == 0){
            
            gameEnd2 = diagonalcheck(board,player1, 'o', postion);
            }
            
            if (gameEnd == 1 ){
                break;
            }
            if (gameEnd2 == 1){
                break;
            }
            
        }
        cout << "Thanks for playing!" << endl; //end message
        
    }
    void displayBoard(char board [9][7]){ //loops through 2D array displaying each element in brackets
        cout << " 1  2  3  4  5  6  7" << endl;
        for(int i = 0; i < 9; i++){
            for(int j = 0;j<7;j++){
                
                cout << "|" << board[i] [j] << "|";
                
            }
            cout << endl;
        }
    }
    int columnCheck(char board [9][7], int &player1, char input){ //function checks for first empty row in player checked column
        int x = player1 - 1;
        if (board[8][x] == ' '){ //determines if column is empty
            board[8][x] = input;
        }
        else{
            
        
        for (int i = 0; i < 9; i++){ //loops through occupied spaces looking for opening
            if (board[i] [x] == 'x' | board[i][x] == 'o'){
                if(board[0][x] != ' '){ //checks if top row of column is filled
                    cout << "This row is full. Try another\n";
                    player1 = -1;
                    break;
                }
                if (i >= 0){
                    
                    board [i-1] [x] = input; //stores element in free row of column
                    
                    return i;
                    break;
                }
          
             
                
                    
            }
       
           
            
        }
    }
        return 0;
    }
    int check(char board [9][7], int player1, char input, int postion){ //checks vertical and horizontal for four in a row
        int x = player1 - 1;
        postion -=1;
        
        int count = 0;
        int count2 = 0;
        int count3 = 0;
        int count4 = 0;
        int temp = 0;
        
        if(x >= 0 || x <= 6){ //determines if there are columns to the left and right of the player selected column
            
            for(int i = 0; i < 4; i++){
                
                if(board[8][x-i] == input){ //fixes error with program not checking last row
                    
                   
                    if (temp == 0){
                      
                        temp++;
                    }
                    count++;
                }
                if(board[8][x+i] == input){ //fixes error with program not checking last row
                 
                    if (temp == 0){
                       
                        temp++;
                    }
                    count++;
                }
                if(board[postion][x-i] == input){ //loops to the left looking for four in a row by comparing it to player's letter
                    count4++; //records amount in a row found
             

                    
                }
                if(board[postion][x+i] == input){ //loops to the left looking for four in a row by comparing it to player's letter
                  
                    count4++; //records amount in a row found
                   
                }
            }
            
            if(count > 4 ){ //checks for a winner
                cout << "The winner is: " << input << endl;
                cout << count << endl;
                return 1;
            }
            
            if(count == 100000){
                
            }
            else{ //checks for four in a row vertically
                count = 0;
                for(int i = 0; i < 4; i++){ //loops through the next 3 spaces looking for matches
                    if(board[postion-i][x] == input){ //loops the spaces below looking for matches to the player's letter
                        
                        count2++;
                        
                        
                    }
                    if(board[postion+i][x] == input){ //loops the spaces above looking for matches to the player's letter
                       
                        count2++;
                      
                    }
                    
                }
               
                if (count2 > 4){ //checks for a winner
                    cout << "The winner is: " << input << endl;
                    return 1;
                }
                
            }
            
                
      
        }
     
        if(count > 6 || count2 > 6 || count3 > 6 || count4 > 4){ //final check to determine winner
            cout << "The winner is: " << input << endl;
  
           return 1;
        }
        return 0; //tells the code to continue playing
    }
    int diagonalcheck(char board [9][7], int player1, char input, int postion){ //checks diagnoals for four in a row
        int x = player1 - 1;
       postion -= 1;
       
        int counter = 0;
        int counter2 = 0;
        if (x >= 0 || x < 7){
            
            for(int i = 0; i < 4; i++){ //loops through the 3 surronding spaces
                
                if(board[postion-i][x+i] == input){ //checks one diagnonal direction forward for matches
                   
                    counter++; //records how many spaces match the player's letter
                   
                    
                }
                if(board[postion+i][x-i] == input){ //checks one diagnonal direction backwards for matches
                    
                    counter++;
            
                    
                }
                
                if(postion == -1){ //fixes error of code not checking the last row
                    if(board[8-i][x-i] == input){
                    
                        counter2++;
                    }
                    if(board[8-i][x+i] == input){
                     
                        counter++;
                        
                        
                    }
                    
                    if(counter >= 3 || counter2 >= 3){ //determines if win a winner has been found
                        cout << "The winner is: " << input << endl;
                        return 1;
                    }
                    
                    
                }
                
                
                if(board[postion-i][x-i] == input){ //checks another diagnonal direction forward for matches
                
                    counter2++; //records number of spaces that match the player's letter
                    
                    
                }
                
                if(board[postion + i][x+i] == input){ //checks another diagnonal direction backwards for matches
                
                    counter2++; //records number of spaces that match the player's letter
       
                    
                }
               
                
                            }
        }
       
        if (counter >= 5 || counter2 >= 5){ //determines if a winner if found

            cout << "The winner is: " << input << endl;
            return 1;
        }
        return 0; //tells the code to keep playing
    }

};
int main(int argc, const char * argv[]) {
    
    Connect4* game = new Connect4(); //creates a pointer to a Connect4 object
    game -> beginGame(); //calls the begin game function
    delete game; //garabage collection of used data
}
