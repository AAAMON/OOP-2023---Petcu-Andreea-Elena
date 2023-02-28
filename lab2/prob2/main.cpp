#include <iostream>
#include "Student.h"
#include "Student_global.h"


int main() {
    Student s;
    s.init();
    s.setName("Ana");
    s.setEnglish(8.2);
    s.setHistory(10);
    s.setMath(7.1);
    std::cout << "name: " << s.getName() << '\n';
    std::cout << "math: " << s.getMath() << '\n';
    std::cout << "english: " << s.getEnglish() << '\n';
    std::cout << "history: " << s.getHistory() << '\n';
    std::cout << "average: " << s.getAverage() << '\n';

    Student s1;
    s1.init();
    s1.setName("George");
    s1.setEnglish(10);
    s1.setHistory(6);
    s1.setMath(4.9);
    std::cout << "name: " << s1.getName() << '\n';
    std::cout << "math: " << s1.getMath() << '\n';
    std::cout << "english: " << s1.getEnglish() << '\n';
    std::cout << "history: " << s1.getHistory() << '\n';
    std::cout << "average: " << s1.getAverage() << '\n';

    std::cout << "compare name: " << students_compare_name(s, s1) << '\n';
    std::cout << "compare math: " << students_compare_math(s, s1) << '\n';
    std::cout << "compare english: " << students_compare_english(s, s1) << '\n';
    std::cout << "compare history: " << students_compare_history(s, s1) << '\n';
    std::cout << "compare average: " << students_compare_average(s, s1) << '\n';

    return 0;
}