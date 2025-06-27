#ifndef RESUME_GENERATOR_H
#define RESUME_GENERATOR_H
#include <string>
#include "education.h"
#include "experience.h"
#include "personal_info.h"
using namespace std;
class ResumeGenerator
{

public:
    void mdTemplate1(const Education &edu, const Experience &exp, PersonalInfo &p);
    void mdTemplate2(const Education &edu, const Experience &exp, PersonalInfo &p);
    void mdTemplate3(const Education &edu, const Experience &exp, PersonalInfo &p);
};

#endif