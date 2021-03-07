// Calendar creator: This program creates a yearly calendar. 
// The user inputs the year and the first day of the year. 
// The calendar takes into account leap years and prints out the appropriate calendar. 
// By Daniel Romero. 

#include <iostream>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
void printYearCalendar(int year, int startingDay);
bool leapYear(int year);
int main()
{
    int year, startingDay, inputDay;
    cout << "Welcome to Calendar creator. " << endl; 
    cout << "Please enter the year of the calendar you want to make  ";
    cin >> year; 
    cout << endl << "Please enter starting day of the year (1 for Monday...7 for Sunday) ";
    cin >> inputDay;
    cout << endl;

    startingDay = inputDay - 1;

    cout << endl; printYearCalendar (year, startingDay);

    return 0;
}
void printYearCalendar(int year, int startingDay)
{

        // January 
            cout << "January  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);
        
        // February 
            bool flag = leapYear(year);
            if (flag == true)
            {
                cout << "February  " << year << endl;
                startingDay = printMonthCalendar(29, startingDay);
            }
            else
            {
                cout << "February  " << year << endl;
                startingDay = printMonthCalendar(28, startingDay);
            }
            
        // March 
    
            cout << "March  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);

        // April 
       
            cout << "April  " << year << endl;
            startingDay = printMonthCalendar(30, startingDay);

        // May 
        
            cout << "May  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);

        // June 
        
            cout << "June  " << year << endl;
            startingDay = printMonthCalendar(30, startingDay);

        // July 
       
            cout << "July  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);

        // August 
        
            cout << "August  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);

        // September 
       
            cout << "September  " << year << endl;
            startingDay = printMonthCalendar(30, startingDay);

        // October 
        
            cout << "October  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);

        // November 
        
            cout << "November  " << year << endl;
            startingDay = printMonthCalendar(30, startingDay);

        // December 
     
            cout << "December  " << year << endl;
            startingDay = printMonthCalendar(31, startingDay);
  
}
int printMonthCalendar(int numOfDays, int startingDay)
{
    cout << "Mon     Tue     Wed     Thu     Fri     Sat    Sun" << endl;

    
    int k;
    for (k = 0; k < startingDay; k++)
        cout << '\t';


    for (int j = 1; j <= numOfDays; j++)
    {
        cout << j << '\t';

        if (++k > 6)
        {
            k = 0;
            cout << '\n';
        }
    }

    if (k)
        cout << '\n';

    startingDay = k;

    cout << endl;
    return startingDay;
}
bool leapYear(int year)
{
    bool isLeapYear = false;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = true;
            }
        }
        else isLeapYear = true;
    }
    return isLeapYear;
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
