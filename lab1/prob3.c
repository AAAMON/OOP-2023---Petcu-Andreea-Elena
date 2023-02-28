#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
    Read a sentence from the input using scanf API. Then sort split it into words and write to the screen (using the printf API) 
    the words sorted (from the longest one to the shortest one).If two words have the same length - they will be sorted out alphabetically.4
    We consider that each word is separated from another one using space (one or multiple).
*/

int cmp(char a[], char b[]) {
    int lena = strlen(a);
    int lenb = strlen(b);
    if (lena > lenb)
        return 1;
    if (lena < lenb)
        return 0;
    
    for (int i = 0; i < lena; i++) {
        if (a[i] == b[i])
            continue;
        
        if (a[i] > b[i])
            return 1;
        else
            return 0;
    }
    
    return 0;
}

void bubble(char words[20][40], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (!cmp(words[j], words[j+1])) { // swap
                char aux[40];
                strcpy(aux, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], aux);
            }

}


int main () {
    char sen[400];
    char words[20][40];
    int w = 0;
    scanf("%[^\n]", sen); // idk

    int i = 0;
    char c;
    char *wo = strtok(sen, " ");
    while (wo) {
        strcpy(words[w++], wo);
        wo = strtok(NULL, " ");
    }

    bubble(words, w);

    for (int i = 0; i < w; i++)
        printf("%s\n", words[i]);


    return 0;
}