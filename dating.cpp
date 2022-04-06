#include <iostream>
#include "colors.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;



int main()
{
    // declaring vars
    string gLooks, rich;
    bool loop = true;
    
    while (loop) {
        cout << "Are you rich? (y/n): ";
        cin >> rich;
        
        cout << "Are you good looking? (y/n): ";
        cin >> gLooks;
        
        if (gLooks == "y" || gLooks == "n" && rich == "y" || rich == "n") {
            cout << "Hello";
            loop = false;
        } else {
            cout << BOLDRED << "Invalid Input. Try again." << RESET << endl;
        }
        
    }
    
    
}