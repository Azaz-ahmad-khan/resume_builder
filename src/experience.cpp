#include <iostream>
#include <string>
#include "../include/experience.h"
using namespace std;

void Experience::inputData()
{
    cout << "Enter the name of company you worked in : ";
    getline(cin, company);
    cout << "what was your role in the company :";
    getline(cin, role);
    cout << "how many years have you done this role :";
    getline(cin, duration);
}
string Experience::getFormatted()
{
    return "EXPERIENCE : \n  Job At :" + company + "company \n At Post :" + role + "\n For :" + duration + "years";
}