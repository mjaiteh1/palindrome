//
//  main.cpp
//  palindrome
//
//  Created by Mariama Jaiteh on 11/19/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
        
        string myString = "";
        string newString = "";
        cout << "Enter your sentence: ";
        cin >> myString;
        for(int i = myString.length(); i >= 0; i--)
        {
            if(isalpha(myString[i]))
            {
                newString += myString[i];
            }
        }
        if (newString == myString)
        {
            cout << myString << " is a palindrome!" << endl;
        }
        else{cout << myString << " is not a palindrome!" << endl; }
    
    
   return 0;
}

