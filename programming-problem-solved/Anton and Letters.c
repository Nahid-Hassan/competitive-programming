/*
    ##
    Md. Nahid Hassan
    Computer Science & Engineering Department
    University of Rajshahi
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int countDistinctLetters = 0, i, j;
    int setOfLetterSize = 0;
    char setOfLetter[2000];
    char alphabet[30] = "abcdefghijklmnopqrstuvwxyz";

    gets(setOfLetter);

    setOfLetterSize = strlen(setOfLetter);

    /*printf("set of letter size = %d\n",setOfLetterSize);*/
    for(i=0;i<setOfLetterSize;i++) {
        for(j=0;j<26;j++) {
            if(setOfLetter[i] == alphabet[j]) {
                countDistinctLetters++;
                alphabet[j] = '0';
            }
        }
    }
    printf("%d\n",countDistinctLetters);

    return 0;
}

