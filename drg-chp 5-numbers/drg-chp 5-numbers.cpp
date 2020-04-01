//drg-chp 5-numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: David Garza
//Date: 20200331
//Description: To output the sum of multiple numbers and to individually place them.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int intNumber = 0;
    int intSeparateNumber = 0;
    int intSum = 0;
    string strOutput = "";
  
    std::cout << "\nPlease enter an integer: ";
    std::cin >> intNumber;

    intNumber = abs(intNumber);
           
    while (intNumber > 0) {

        intSeparateNumber = intNumber % 10;
        intSum = intSum + intSeparateNumber;
        intNumber = intNumber / 10;

        strOutput.insert(0, to_string(intSeparateNumber));
        strOutput.insert(0, " ");
        
    };
   
    std::cout << strOutput << endl;
    std::cout << "\nThe sum of your integer is: "<< intSum << " " << endl;
    


}

