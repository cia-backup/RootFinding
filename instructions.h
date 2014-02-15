#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

void Instructions()
{
    cout << "Trigonometric Functions (x is in radians, pi = 3.14159):\n\t cos(x)\n\t sin(x)\n\t tan(x)\n\tacos(x)\n\tasin(x)\n\tatan(x)\n";
    cout << "Exponential Functions (e = 2.7182818):\n\t exp(x)\n\t log(x)\n"; 
}

void Pause()
{
    cout << "Press the any key to continue...";
    getch();
}
