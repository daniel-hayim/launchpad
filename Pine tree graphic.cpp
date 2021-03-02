
// Pine tree graphic : This file contains the 'main' function. Program execution begins and ends there.
This is a program that asks the user to input a number of triangles desired and a character symbol.
The program then produces a first sample shifted triangle and then a pine tree aligned to the left margin.
By Daniel Romero.
//

#include <iostream>
using namespace std;

void printShiftedTriangle(int n, int m, char symbol);
void printPineTree(int n, char symbol);

int main()
{
    int n;
    char symbol;

    cout << "How many triangles do you want?" << endl;
    cin >> n; cout << endl;

    cout << "What symbol do you want it to be made from?" << endl;
    cin >> symbol; cout << endl;
    
    printShiftedTriangle (n, 4, symbol);

    cout << endl;

    printPineTree (n, symbol);

    return 0;
}
void printShiftedTriangle(int n, int m, char symbol)
{
    for (int i = 1; i <= n ; i++) 
    {
        int spaceMax = ((m + 3) - i);
        for (int s = 1 ; s <= spaceMax; s++)
        {
            cout << " ";
        }

        for (int c = 1; c <= i*1.8; c++)
        {
            cout << symbol;
        }

        cout << endl; 
    }
}

void printPineTree(int n, char symbol)
{
   
    for (int i = 1; i <= n ; i++)
    {
       
        printShiftedTriangle(i+1, n-2, symbol);

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
