#ifndef NUMBER_LIST_H
#define NUMBER_LIST_H

class NumberList {
        int *numbers;
        int count;
        int max_size;
    public:
        void Init();          // count will be 0
        bool Add(int x);      // adds X to the numbers list and increase the data member count.
                              // if count is bigger or equal to 10, the function will return false
        void Sort();          // will sort the numbers vector
        void Print();         // will print the current vector
};

#endif