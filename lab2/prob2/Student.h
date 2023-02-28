#pragma once

class Student {
    private:
        char name[50];
        float math;
        float english;
        float history;
        float average_grade;
    public:
        void init();
        void setName(const char * _name);
        void setMath(float grade);
        void setEnglish(float grade);
        void setHistory(float grade);
        const char * getName();
        float getMath();
        float getEnglish();
        float getHistory();
        float getAverage();
};