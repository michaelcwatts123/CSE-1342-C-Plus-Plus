/*
 * LabQuiz3
 * Purpose:Math Tutorial program for addition and multiplicaiton.
 * The user can continually choose whether to do addition,
 * multiplication or quit.
 * Users are presented with problems, asked to enter the answer
 * Results are checked and feedback given
 * When program quits user is told how many right and wrong
 * answers
 */

// Your assignment is to fill in the missing code within the
// functions below.  You can copy and paste the following into a
// text editor and save it in a file called LabQuiz3.cpp
// submit your .cpp and .out files.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//Function Prototypes
void mathProblem(char,int,int,int &, int &);
char userChoice();
string helloMessage(string);
void getRandomNumbers(int &, int &);

int main()
{
    // Declaration of variables
    
    char choice; // will contain the letter a or m or q
    int right = 0; // number of total correct answers
    int wrong = 0; // number of total wrong answers
    int firstNumber, secondNumber; // will contain random numbers
    
    srand(time(0)); // seed of time(0) used to generate truly
    // random numbers
    string myName; // users entered name
    myName = helloMessage("Welcome to our Math Tutor program");
    cout << "Hello " << myName  << endl;
    
    // present user with choice
    choice  = userChoice(); // calls the function userChoice
    // to get user's choice
    while(choice != 'q')
    { // call function to get two random numbers
        getRandomNumbers(firstNumber,secondNumber);
        
        // call function to present math problem
        mathProblem(choice,firstNumber,secondNumber,right,wrong);
        
        // get user's selection again
        choice = userChoice();
    }
    
    
    cout << myName <<  " You got" << " " <<  right << " " << "answers correct, and " << " " <<  wrong << " "
    << " answers wrong." << endl;
    return 0;
}

/* Purpose: to display the message contained in the parameter m
 and prompt the user for their name
 Parameters: m  contains the message to be displayed to the
 screen
 Return value: the person's entered name
 */
string helloMessage(string m)
{
    string name;
    cout << m << endl;
    cout << "Please enter your name: ";
    cin >> name;
    return name;
}

/* Purpose: Generate two random numbers
 Parameters: return through reference parameters the two random
 numbers
 */
void getRandomNumbers(int &num1, int &num2)
{
    num1 = rand()%100;
    num2 = rand()%100;
}

/* Purpose: Present math problem to user, check answer, give user
 response message, add 1 to right or wrong count
 Parameters: c user's choice
 x first random number
 y second random number
 rightCount  number of right answers
 wrongCount number of wrong answwers
 */
void mathProblem(char c,int x, int y,int &rightCount,int &wrongCount)
{  // FILL IN CODE HERE
    int answer;
    switch (c){
            case 'a':{
                cout << x << " + "<< y << " =?\n";
                cin>> answer;
                if (answer == x+y){
                    cout<<"Correct!";
                    rightCount++;
                }
                else{
                    cout<<"Incorrect!";
                    wrongCount++;
                }
                break;
            }
        case 'm':{
            cout << x << " * "<< y << " =?\n";
            cin>> answer;
            if (answer == x*y){
                cout<<"Correct!";
                rightCount++;
            }
            else{
                cout<<"Incorrect!";
                wrongCount++;
            }
            break;
        }
        case 'q':{
            break;
        }
        }
            
}


/*
 * Purpose: Prompt for user's choice(a,m or q)
 *          and read the choice putting
 *          it into the response parameter
 * Parameters: none
 * Return:     user's input choice of letter 'a', 'm', or 'q'
 */

char userChoice()
{
    char choice;
    cout << "Enter a choice: a for addition, m for multiplication, or q to quit: ";
    cin >> choice;
    return choice;
}

