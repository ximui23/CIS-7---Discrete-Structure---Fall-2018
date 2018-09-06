//
//  main.cpp
//  Assignment1
//
//  Created by Mai Tuyet Luu on 8/29/18.
//  Mai_Luu_&Avitia_Alejandra


#include <iostream>
using namespace std;

int main() {
    
    
    string input;
    //do {
    cout << "Enter a string: " << endl;
    getline(cin, input);
    
    cout << "You entered: " << input << endl;
    do {
    //iterate through the string into every single character inside the input string
    //for each
    //check if a-z
    //if it is, then set statement flag
    //if not, assuming it is a connector
    //check statement flag, if flag is false then not wff
    //set flag to false

    bool lastWasAlpha = false;
    bool lastWasNot = false;
    bool lastWasConnector = false;
    bool lastWasPartOfImplies = false;
    bool isValidWff = true;
    
    for(unsigned int i = 0; i<input.length(); i++) {
        //set a flag to see if whether we got a statement or not
       
        
        //Access the character in a string
        char c = input[i];
        //test c
        if(c == ' '){
            //ignore space
            continue;
        }
        //if the resulf from finding is not string::npos -> we found the connector
        //if (connectors.find(c) != string::npos) {
        //Or
        if (c == '!' || c == 'V'  || c == 'v' || c == '^' || c == '-' || c == '>'){
           
            if(c != '!' && c != '-' && c != '>')
            {
                if(!lastWasAlpha)
                {
                    isValidWff = false;
                    break;
                }
                lastWasConnector = true;
                
            }
            else if (c == '-' || c == '>')
            {
                if(c == '-')
                {
                    if (!lastWasAlpha) {
                        isValidWff = false;
                        break;
                    }
                    
                    lastWasConnector = true;
                    lastWasPartOfImplies = true;
                }
                else {
                    if (!lastWasPartOfImplies)
                    {
                        isValidWff = false;
                        break;
                    }
                    lastWasConnector = true;
                }
            }
            
            else // this checks for '!'
            {
                if(lastWasAlpha)
                {
                    isValidWff = false;
                    break;
                }
                lastWasNot = true;
            }
            lastWasAlpha = false;
            
            
        }
        //}
        
        
        //if character is not connector and it is aplha
        //it will go straight to the code below
        else if (isalpha(c)){
            //have found a statement
            if (!isupper(c))
            {
                isValidWff = false;
                break;
            }
            if (lastWasAlpha)
            {
                isValidWff = false;
                break;
            }
            lastWasAlpha = true;
            continue;
        }
        else
        {
            isValidWff = false;
        }
        

    }
    cout << (isValidWff ? "That is a WFF" : "NOT a Valid WFF") << endl;
    
    
    cout << "Enter a new string or 'end' to exit: " << endl;
        getline(cin, input);
    }
    while (input != "end" && input != "End" && input != "END");
    
    return 0;
}

