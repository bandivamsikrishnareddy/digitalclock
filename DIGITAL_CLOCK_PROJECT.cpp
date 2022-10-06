// DIGITAL CLOCK PROJECT BANDI VAMSI KRISHNA REDDY 201113267 MANIT BHOPAL ELECTRICAL ENGINEERING
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
using namespace std;
int main()
{
    int hour, min, sec;
    cout << "*Enter Current time*\n";
    cout << "HH-";
    cin >> hour;
    cout << "MM-";
    cin >> min;
    cout << "SS-";
    cin >> sec;
    if (hour > 23)
    {
        cout << "Wrong Time input";
    }
    else if (min > 60)
    {
        cout << "Wrong Time Input";
    }
    else if (sec > 60)
    {
        cout << "Wrong Time Input";
    }
    else
    {
        while (1)
        {
            for (hour; hour < 24; hour++)
            {
                for (min; min < 60; min++)
                {

                    for (sec; sec < 60; sec++)
                    {
                        system("cls");
                        cout << "Current Time = " << hour << ":" << min << ":" << sec << "Hrs";
                        Sleep(1000);
                    }
                    sec = 0;
                }
                min = 0;
            }
        }
    }
}