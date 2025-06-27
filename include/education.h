#ifndef EDUCATION_H
#define EDUCATION_H
#include <string>
using namespace std;

class Education
{
public:
    string degree, institute, year;
    void inputData();
    string getFormatted();
};

#endif