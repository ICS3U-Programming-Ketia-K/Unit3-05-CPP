// Copyright (c) 2021 Ketia Gaelle Kaze All rights reserved.
//
// Created by: Ketia Gaelle Kaze
// Created on: Dec 13,  2021
// This program asks the user for the month as a number
// between 1 and 12. It then displays the month as a
// string to the user.
#include <iostream>
int main() {
    // declare variables
    int userMonth;

    // Ask a number to the user for a month
    std::cout <<"Enter the number for a month: ";
    std::cin  >> userMonth;
    std::cout << "" << std::endl;

    // State the month entered by the user as a string
    switch (userMonth) {
    case 1 :
    std::cout << userMonth << " represents January. \n";
    break;

    case 2 :
    std::cout << userMonth << " represents February. \n";
    break;

    case 3 :
    std::cout << userMonth << " represents March. \n";
    break;

    case 4 :
    std::cout << userMonth << " represents April. \n";
    break;

    case 5 :
    std::cout << userMonth << " represents May. \n";
    break;

    case 6 :
    std::cout << userMonth << " represents June. \n";
    break;

    case 7 :
    std::cout << userMonth << " represents July. \n";
    break;

    case 8 :
    std::cout << userMonth << " represents August. \n";
    break;

    case 9 :
    std::cout << userMonth << " represents September. \n";
    break;

    case 10 :
    std::cout << userMonth << " represents October. \n";
    break;

    case 11 :
    std::cout << userMonth << " represents November. \n";
    break;

    case 12 :
    std::cout << userMonth << " represents December. \n";
    break;

    // Default deals with any input that can display an error case
    default :
    std::cout << "Error. " << userMonth << " does not represent a month. \n";
    }
}
