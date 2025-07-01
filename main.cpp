#include <iostream>
#include "include/personal_info.h"
#include "include/education.h"
#include "include/experience.h"
#include "include/resume_generator.h"

#include <string>
#include <fstream>
using namespace std;

int main()
{

    PersonalInfo person;
    Education education;
    Experience exp;
    ResumeGenerator mdGenerator;

    cout << "WELCOM TO THE RESUME GENERATOR \n";

    person.inputData();
    education.inputData();
    exp.inputData();
    string personal_info = person.getFormatted();
    string educational_info = education.getFormatted();
    string experience_info = exp.getFormatted();
    ofstream out;
    out.open("resume.txt");
    out.clear();
    out << personal_info;
    out << educational_info;
    out << experience_info;
    out.close();
    int choice;
    cout << "\n=======CHOICE OF .md TEMPLATE=========\n";
    cout << "Select the template Enter 1 OR 2 OR 3\n for Building All templates press 4 :";
    cin >> choice;
    cout << "\n";
    switch (choice)
    {
    case 1:
        mdGenerator.mdTemplate1(education, exp, person);
        break;
    case 2:
        mdGenerator.mdTemplate2(education, exp, person);
        break;
    case 3:
        mdGenerator.mdTemplate3(education, exp, person);
        break;

    case 4:
    {
        mdGenerator.mdTemplate1(education, exp, person);
        mdGenerator.mdTemplate2(education, exp, person);
        mdGenerator.mdTemplate3(education, exp, person);
        break;
    }
    default:
        cout << "invalide choice please enter valid choice /n";
        break;
    }
}
