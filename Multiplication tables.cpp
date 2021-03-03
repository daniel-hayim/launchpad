
// Multiplication tables: This file contains the 'main' function. Program execution begins and ends there.
// This program makes multiplcation tables for positive integers. 
// By Daniel Romero. 
//

#include <iostream>
using namespace std;

int main()
{
    int n, multiple;
    int currentNum;
    int lineCount;

    cout << "Please enter a positive integer:" << endl;
    cin >> n;
    
    //the first for loop sets the line recurring until nth line and that in each line there is an added number
    for (lineCount = 1, currentNum = 1; lineCount <= n; lineCount ++, currentNum++) {

        // the currentNum is set by the first for loop and the multiple by the nested loop
        for (multiple = 1; multiple <= n; multiple += 1) {
            cout << currentNum * multiple << "\t";
        }
        
        cout << endl;
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
