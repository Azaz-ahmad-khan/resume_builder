#include <iostream>
#include <string>
#include <fstream>
#include "../include/resume_generator.h"
#include "../include/experience.h"
#include "../include/education.h"
#include "../include/personal_info.h"

using namespace std;

void ResumeGenerator::mdTemplate1(const Education &edu, const Experience &exp, PersonalInfo &p)
{
    ofstream file("resume1.md");
    if (!file.is_open())
    {
        cout << " Failed to open file\n";
        return;
    }
    file.clear();

    file << "# 🚀 " << p.name << "\n\n";
    file << "#### *Innovating the Future, One Line of Code at a Time*\n\n";

    file << "---\n\n";

    file << "**📧 Email:** " << p.email << " | **📱 Phone:** " << p.phone << " | **🏠 Location:** " << p.address << "\n\n";

    file << "---\n\n";

    file << "## 🎓 **EDUCATION**\n\n";
    file << "### 🏛️ **" << edu.degree << "**\n\n";
    file << "**🏫 Institution:** " << edu.institute << "\n\n";
    file << "**📅 Graduation Year:** " << edu.year << "\n\n";
    file << "*\"Knowledge is the foundation of all great achievements\"*\n\n";

    file << "---\n\n";

    file << "## 💼 **PROFESSIONAL EXPERIENCE**\n\n";
    file << "### 🌟 **" << exp.role << "**\n\n";
    file << "**🏢 Company:** " << exp.company << "\n\n";
    file << "**⏰ Duration:** " << exp.duration << " years\n\n";
    file << "*\"Excellence is not a skill, it's an attitude\"*\n\n";

    file << "---\n\n";
    file << "#### 🙏 *Thank you for considering my application!*\n\n";
    file << "##### ⭐ *Ready to contribute and make a difference!*\n";

    file.close();
    cout << " successfully added data \n";
}

void ResumeGenerator::mdTemplate2(const Education &edu, const Experience &exp, PersonalInfo &p)
{
    std::ofstream file("resume2.md");
    if (!file.is_open())
    {
        std::cout << " Failed to open  file\n";
        return;
    }
    else
    {
        file.clear();

        file << "```\n";
        file << "═══════════════════════════════════════════════════════════════\n";
        file << "                    🌟 RESUME PORTFOLIO 🌟                    \n";
        file << "═══════════════════════════════════════════════════════════════\n";
        file << "```\n\n";

        file << "# 👨‍💻 " << p.name << "\n\n";
        file << "## *Building Tomorrow's Solutions Today*\n\n";

        file << "### 📬 **Contact Hub**\n\n";
        file << "```yaml\n";
        file << "📧 Email    : " << p.email << "\n";
        file << "📱 Phone    : " << p.phone << "\n";
        file << "🏠 Address  : " << p.address << "\n";
        file << "🌐 Status   : Available for opportunities\n";
        file << "```\n\n";

        file << "### 🎯 **Academic Foundation**\n\n";
        file << "```diff\n";
        file << "+ 🎓 Degree      : " << edu.degree << "\n";
        file << "+ 🏛️ Institution : " << edu.institute << "\n";
        file << "+ 📅 Year        : " << edu.year << "\n";
        file << "+ 🏆 Status      : Successfully Completed\n";
        file << "```\n\n";

        file << "> 💡 **Learning Philosophy**\n";
        file << "> *\"Education is the passport to the future, for tomorrow belongs to those who prepare for it today.\"*\n\n";

        file << "### 🚀 **Professional Journey**\n\n";
        file << "```diff\n";
        file << "+ 💼 Role        : " << exp.role << "\n";
        file << "+ 🏢 Company     : " << exp.company << "\n";
        file << "+ ⏱️ Duration    : " << exp.duration << " years\n";
        file << "+ 📈 Impact      : Delivering Excellence\n";
        file << "```\n\n";

        file << "> 🔥 **Work Ethic**\n";
        file << "> *\"Success is not final, failure is not fatal: it is the courage to continue that counts.\"*\n\n";

        file << "---\n\n";
        file << "### 🌟 **Ready to Make an Impact!** 🌟\n\n";
        file << "```\n";
        file << "🎯 Skills: Expert Level    💪 Dedication: 100%\n";
        file << "🚀 Innovation: Always      🤝 Teamwork: Excellent\n";
        file << "📈 Growth: Continuous      ⚡ Energy: High\n";
        file << "```\n\n";

        file.close();
        std::cout << "Data added successfully\n";
    }
}

void ResumeGenerator::mdTemplate3(const Education &edu, const Experience &exp, PersonalInfo &p)
{
    std::ofstream file("resume3.md");
    if (!file.is_open())
    {
        std::cout << " Failed to open the file\n";
        return;
    }
    else
    {
        file.clear();

        // Executive Professional Table Style Template
        file << "# 📋 **EXECUTIVE RESUME**\n\n";
        file << "## " << p.name << "\n\n";
        file << "### *Transforming Vision into Reality*\n\n";

        file << "---\n\n";

        file << "## 📞 **CONTACT INFORMATION**\n\n";
        file << "| **Contact Type** | **Details** | **Status** |\n";
        file << "|:----------------:|:-----------:|:----------:|\n";
        file << "| 📧 **Email** | " << p.email << " | ✅ Active |\n";
        file << "| 📱 **Phone** | " << p.phone << " | ✅ Available |\n";
        file << "| 🏠 **Address** | " << p.address << " | 📍 Current |\n\n";

        file << "---\n\n";

        file << "## 🎓 **EDUCATIONAL QUALIFICATIONS**\n\n";
        file << "| **Category** | **Information** | **Achievement** |\n";
        file << "|:------------:|:---------------:|:---------------:|\n";
        file << "| **Degree Program** | " << edu.degree << " | 🌟 Completed |\n";
        file << "| **Institution** | " << edu.institute << " | 🏛️ Prestigious |\n";
        file << "| **Graduation Year** | " << edu.year << " | 📅 On Schedule |\n\n";

        file << "> **🎯 Educational Philosophy:**\n";
        file << "> *\"The beautiful thing about learning is that no one can take it away from you.\"*\n\n";

        file << "---\n\n";

        file << "## 💼 **PROFESSIONAL BACKGROUND**\n\n";
        file << "| **Professional Aspect** | **Details** | **Impact Level** |\n";
        file << "|:------------------------:|:-----------:|:----------------:|\n";
        file << "| **Current Position** | " << exp.role << " | 🎯 Leadership |\n";
        file << "| **Organization** | " << exp.company << " | 🏢 Excellence |\n";
        file << "| **Experience Duration** | " << exp.duration << " years | ⏰ Committed |\n\n";

        file << "> **💪 Professional Values:**\n";
        file << "> *\"Excellence is never an accident. It is always the result of high intention, sincere effort, and intelligent execution.\"*\n\n";

        file << "---\n\n";

        file << "### 🌟 **CAREER OBJECTIVES** 🌟\n\n";
        file << "```\n";
        file << "┌─────────────────────────────────────────────┐\n";
        file << "│  🚀 Innovation    💡 Problem Solving  🎯   │\n";
        file << "│           Excellence Driven                 │\n";
        file << "│        Ready for New Challenges             │\n";
        file << "└─────────────────────────────────────────────┘\n";
        file << "```\n\n";

        file << "#### 🤝 *Let's build the future together!*\n\n";
        file << "**Key Strengths:** Innovative Thinking | Technical Excellence | Team Leadership\n\n";

        file.close();
        cout << "Successfully added data\n";
    }
}