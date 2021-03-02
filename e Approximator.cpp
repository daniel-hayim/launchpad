// eApproximator: This file contains the 'main' function. Program execution begins and ends there.
The number e is an important mathematical constate that is the base of the natural logarithm.
e is also useful in the study of compound interest and other useful applications. 
This program prints up to the 15th nth term of e at the precision of cout.precision(30).
This program is optimized to run in O(n).
By Daniel Romero.

//

#include <iostream>
using namespace std;

double eApprox(int n);

int main()
{
    cout.precision(30);
        for (int n = 1; n <= 15; n++) {
            cout << "n = " << n << "  e is  " << eApprox (n) << '\t' << endl;
        }
        return 0;
    
}
double eApprox(int n)
{
    double e = 1, factorial = 1;
    for (int count = 1; count <= n; count += 1)
    {
        factorial *= count;
        e += 1 / factorial;
    }

    return e;
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
