//
//  main.cpp
//  Program5
//
//  Created by Michael Watts on 4/12/17.
//  Copyright © 2017 Michael Watts. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    Stack s;
    int linecount;
    cout << "Parsing filename: " << argv[1] << endl;
    char c;
    ifstream sourceCode(argv[1], ios::in);
    if(!sourceCode){
        cout<< "Critical Error!"<< endl;
        exit(0);
    }
    while(sourceCode.get(c)) {
        if (c == '\n'){
            linecount++;
        }
        if (c == '{'){
            s+= '{';
        }
        if (c == '('){
            s+= '(';
        }
        if (c == '['){
            s+= '[';
        }
        if (c == '}'){
            if(s-= '}'){
                
            }
            else{
                cout << "Error on line " << linecount << " mismatched {} pair" <<endl;
                
                exit(0);
            }
        }
        if (c == ')'){
            if(s-= ')'){
                
            }
            else{
                cout << "Error on line " << linecount << " mismatched () pair" <<endl;
                exit(0);
            }
        }
        if (c == ']'){
            if(s-= ']'){
                
            }
            else{
                cout << "Error on line " << linecount << " mismatched [] pair" <<endl;
                exit(0);
            }
        }
        if (sourceCode.eof()){
            if(s-= ' '){
                
            }
            else{
                cout << "Error on line " << linecount << " mismatched [] pair" <<endl;
                exit(0);
            }
           
        }
        cout << c;
}
}
