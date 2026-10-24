/*
Developer: Jayden Veloz
File Name: Ch5Ex3.cpp
Date: 10 / 23 / 26

Requirements:
Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours
it has traveled. It should then use a loop to display the total distance traveled at the end of each
hour of that time period.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int speed, time;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    // Checks for valid speed
    while (speed < 0) {
        cout << "Invalid speed. Please enter a positve value for your speed: ";
        cin >> speed;
    }

    cout << "How many hours has it traveled? ";
    cin >> time;

    // Checks for valid time
    while (time < 0) {
        cout << "Invalid time. Please enter a positive integer for your time ";
        cin >> time;
    }

    cout << "\nHours" << setw(24) << right << "Miles Traveled" << endl;
    cout << "-------------------------------" << endl;

    // Calculates distance for each hour by multiplying speed by variable i (time)
    for (int i = 1; i <= time; i++) {
        cout << "  " << i << setw(20) << right << i * speed << endl;
    }

    return 0;
}
