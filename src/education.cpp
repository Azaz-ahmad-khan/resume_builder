#include <iostream>
#include "../include/education.h"
using namespace std;

void Education::inputData()
{
    cout << "\n=========EDUCATION INFO ========\n";
    cout << "please enter the name of your degree:";
    getline(cin, degree);
    cout << "Enter the name of institute:";
    getline(cin, institute);
    cout << "enter the year of graduation:";
    getline(cin, year);
}
string Education::getFormatted()
{

    return "EDUCATION  : \n Bechelors in :" + degree + "\n From Institute :" + institute + "\n Year of Graduation is :" + year + "\n";
}