// shipping charges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: Shipping Charges
Github URL:https://github.com/omr24100/shipping-charges.git
Date: 2/27/25
Programmer: Olivia Ruiz
Requirements:Write a program that asks for the weight 
of the package and the distance it is to be shipped, then display the charges.
2kg or less=$1.10, Over 2kg but no more than 6 kg=$2.20, over 6kg but no more 
than 10kg=$3.70, Over 10kg but no more than 20kg=$4.80. That is the rate per 500 miles shipped. 
Input validations: do not accept values of 0 or less weight of the package. Do not accept weight weights of more than 20kg.
Do not accept distances less than 10 miles or more than 3,000 miles. 
*/

#include <iostream>

#include <iostream>
#include <cmath> 

using namespace std;

double calculateShippingCharge(double weight, double distance) {
    double rate;

    
    if (weight <= 2) {
        rate = 1.10;
    }
    else if (weight <= 6) {
        rate = 2.20;
    }
    else if (weight <= 10) {
        rate = 3.70;
    }
    else if (weight <= 20) {
        rate = 4.80;
    }
    else {
        cout << "Invalid weight. Weight must be 20kg or less." << endl;
        return -1; 
    }

    
    int intervals = ceil(distance / 500);

   
    return rate * intervals;
}

int main() {
    double weight, distance;

   
    while (true) {
        cout << "Enter the weight of the package (in kg): ";
        cin >> weight;
        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight. Weight must be greater than 0 and less than or equal to 20 kg." << endl;
        }
        else {
            break;
        }
    }

    
    while (true) {
        cout << "Enter the shipping distance (in miles): ";
        cin >> distance;
        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
        }
        else {
            break;
        }
    }

    
    double charge = calculateShippingCharge(weight, distance);

    
    if (charge != -1) {
        cout << "The shipping charge is: $" << charge << endl;
    }

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
