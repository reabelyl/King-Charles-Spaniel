//
//  main.cpp
//  King Charles Spaniel Script
//
//  Created by Lyle Baer on 1/24/16.
//  Copyright © 2016 Lyle Baer. All rights reserved.
//  Input:
//  Output:
//
//

#include <stdio.h>
#include <iostream>
using namespace std;

// Main Script
int main()
{
    int a;
    
    do
    {
        cout << "Enter Number from 1 to 100: ";
        int a;
        cin >> a;
    }
        while (a > 1 && a < 100);
        {
            // Script to sort number to word
            {
                if (a%4 && a%7)
                {
                    cout << "\n\n Cavalier \n\n";
                    cout << "\n\n King Charles \n\n";
                }
            }
        }
        if (a>100)
        {
            // Check for Valid Number
            if (a>100)
            {
                // Error Message
                cout << "\n\n\nError: Please Enter a number between 1 and 100.\n\n\n";
            }
        }
        // end of do loop
        
        return 0;
    }


//HOW DO I MAKE A MULTIPLE CHECK IF STATEMENT?
//if ()
// {
// 4 & 7 "Spaniel"
// }
// else
// {
//4 “Cavalier”
//7 “King Charles”