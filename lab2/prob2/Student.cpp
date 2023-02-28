#include <cstring>
#include "Student.h"

void Student::init() {
    math = 0;
    english = 0;
    history = 0;
    average_grade = 0;
}
void Student::setName(const char * _name) {
    strcpy(name, _name);
}
void Student::setMath(float grade) {
    math = grade;
    average_grade = (math + english + history) / 3;
}
void Student::setEnglish(float grade) {
    english = grade;
    average_grade = (math + english + history) / 3;
}
void Student::setHistory(float grade) {
    history = grade;
    average_grade = (math + english + history) / 3;
}
const char * Student::getName() {
    return name;
}
float Student::getMath()
{
    return math;
}
float Student::getEnglish() {
    return english;
}
float Student::getHistory() {
    return history;
}
float Student::getAverage() {
    return average_grade;
}