// Fibonacci Finder : This file contains the 'main' function. Program execution begins and ends there.
This is a program that asks the user to input a positive integer and then prints the corresponding nth term of the Fibonacci sequence.
By Daniel Romero
//

#include <iostream>
#include <cmath>
using namespace std;

int fib(int num) {
    double fibRes, x, y;
    x = ((1 + sqrt(5)) / 2);
    y = num;
    fibRes = (1 / (sqrt(5))) * (pow(x, y)) + .5;

    return fibRes;
}

int main() {
    int num, numFib; 

    cout << "Please enter a positive integer: ";
    cin >> num; cout << endl;

    numFib = fib(num);

    cout << numFib << endl; 
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
