// include/personal_info.h

#ifndef PERSONAL_INFO_H
#define PERSONAL_INFO_H

#include <string>
using namespace std;

class PersonalInfo
{
public:
    string name, email, phone, address;

    void inputData();

    string getFormatted();
};

#endif
