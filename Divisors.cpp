// Divisors: This file contains the 'main' function. Program execution begins and ends there.
This program asks the user to enter a positive integer greater than or equal to two.
It prints out all of its divisors in ascending order seperated by a space. 
This program is optimized to run in squareroot of theta. 
By Daniel Romero.
//

#include <iostream>
using namespace std;

void printDivisors(int num);
int main()
{
    int num;
    cout << "Please enter a positive integer >=2: "; 
    cin >> num; cout << endl; printDivisors(num);

    return 0;
}
void printDivisors(int num)
{
    for (int i = 1; i*i < num; i++)
        if (num % i == 0)
        {
            cout << i << " ";
        }

    for (int i = sqrt(num); i >= 1; i--)
    {
        if (num % i == 0)
        {
            cout << num / i << "  ";
        }
    }
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
