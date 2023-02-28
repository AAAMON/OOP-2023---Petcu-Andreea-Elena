#pragma once
#include "Student.h"

int students_compare_name (Student s1, Student s2);
int students_compare_math (Student s1, Student s2);
int students_compare_english (Student s1, Student s2);
int students_compare_history (Student s1, Student s2);
int students_compare_average (Student s1, Student s2);
void sort_students (Student students[], int nr_students);