#ifndef EXPERIENCE_H
#define EXPERIENCE_H
#include <iostream>
#include <string>
using namespace std;

class Experience
{
public:
    string company;
    string role;
    string duration;

    void inputData();      // Collects experience details from user
    string getFormatted(); // Returns formatted experience as string
};

#endif
