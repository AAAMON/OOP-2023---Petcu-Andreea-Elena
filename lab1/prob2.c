#include <stdlib.h>
#include <stdio.h>

/*
 Write a program in C-Language that open the file "in.txt", and prints the sum of the numbers that are found on each line of the file in.txt.
 To open the file use fopen API. Write your own function that converts a string to a number (similar cu atoi API).
 To print something to the screen, use the printf API.
*/

FILE *fptr;


int stringToInt (char string[]) {
    int number = 0;

    for (int i = 0; string[i]; i++) {
        number = number * 10 + string[i] - '0';
    }

    return number;
}

int main () {
    fptr = fopen("ini.txt", "r");
    char string[10];
    int sum = 0;
    while (fscanf(fptr, "%s", string) > 0) {
        sum += stringToInt(string);
    }

    printf("%d\n", sum);

    return 0;
}