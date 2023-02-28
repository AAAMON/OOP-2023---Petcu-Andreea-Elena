#include <cstring>
#include <cmath>
#include "Student_global.h"

int compare_numbers (int n1, int n2) {
    if (n1 < n2)
        return -1;
    if (n1 == n2)
        return 0;
    return 1;
}
int students_compare_name (Student s1, Student s2) {
    int value = strcmp(s1.getName(), s2.getName());
    if (value)
        value /= abs(value); // set it to 1/-1
    return value;
}
int students_compare_math (Student s1, Student s2) {
    return compare_numbers(s1.getMath(), s2.getMath());
}
int students_compare_english (Student s1, Student s2) {
    return compare_numbers(s1.getEnglish(), s2.getEnglish());
}
int students_compare_history (Student s1, Student s2) {
    return compare_numbers(s1.getHistory(), s2.getHistory());
}
int students_compare_average (Student s1, Student s2) {
    return compare_numbers(s1.getAverage(), s2.getAverage());
}
void sort_students (Student students[], int nr_students) {
    for (int i = 0; i < nr_students; i++) {
        for (int j = 0; j < nr_students-i-1; j++) {
            if (students[j].getAverage() > students[j+1].getAverage()) 
                std::swap(students[j], students[j+1]);
        }
    }
}