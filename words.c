#include <stdio.h>
#include <string.h>
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
void  printWordsUtil(int number[], int curr_digit, char out[], int n)
{
  int j;
    if (curr_digit == n)
    {
        printf("%s ", out);
        return ;
    }
    for (j=0; j<strlen(hashTable[number[curr_digit]]); j++)
    {
        out[curr_digit] = hashTable[number[curr_digit]][j];
        printWordsUtil(number, curr_digit+1, out, n);
        if (number[curr_digit] == 0 || number[curr_digit] == 1)
            return;
    }
}
void printWords(int number[], int n)
{
    char result[n+1];
    result[n] ='\0';
    printWordsUtil(number, 0, result, n);
}
int main(void)
{
    int number[] = {2, 3};
    int n = sizeof(number)/sizeof(number[0]);
    printWords(number, n);
    return 0;
}
