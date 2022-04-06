// Copyright (c) 2022 Alex De Meo All rights reserved
//
// Created By: Alex De Meo
// Date: 02//22
// Description: program determines whether or not the user can date the
// grandchild
#include "Unit3-07-CPP/colors.h"
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;



int main() {
    // declaring vars
    string gLooks, rich;
    bool loop = true;

    // loop to ensure they enter a valid answer
    while (loop) {
        // Get user input
        cout << "Are you rich? (y/n): ";
        cin >> rich;
        // Get user input
        cout << "Are you good looking? (y/n): ";
        cin >> gLooks;
        // make sure input is valid
        if (gLooks == "y" || gLooks == "n" && rich == "y" || rich == "n") {
            // if the conditions are met then say congrats, else say no
            if (gLooks == "y" || rich == "y") {
                cout << BOLDGREEN <<
                "Congratulations, You can date our grandchild";
                loop = false;
            } else {
                cout << BOLDYELLOW <<
                "Imagine not being rich or good looking lol. Sorry bud.";
                loop = false;
            }
        } else {
            cout << BOLDRED << "Invalid Input. Try again." << RESET << endl;
        }
    }
}
