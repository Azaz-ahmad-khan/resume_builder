// src/personal_info.cpp

#include "../include/personal_info.h"
#include <iostream>
using namespace std;

void PersonalInfo::inputData()
{
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Email: ";
    getline(cin, email);
    cout << "Enter Phone: ";
    getline(cin, phone);
    cout << "Enter Address: ";
    getline(cin, address);
}

string PersonalInfo::getFormatted()
{
    return "PERSONAL INFO : \n Name:  " + name + "\n Email: " + email + "\n Phone : " + phone + "\n Adress : " + address + "\n";
}
