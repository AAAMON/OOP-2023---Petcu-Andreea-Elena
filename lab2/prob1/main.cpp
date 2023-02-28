#include <iostream>
#include "NumberList.h"

int main () {
    NumberList n;
    n.Init();
    n.Add(4);
    n.Add(1);
    n.Add(10);
    n.Add(8);
    n.Print();
    n.Sort();
    n.Print();
    return 0;
}