#include <time.h>
#include <stdlib.h>
#include <stdio.h>

//return 0 if not equal, 1 if equal
int checkEqual(char * LHS, char * RHS, int len)
{
    int false = 0;
    int true = 1;
    int result = 1;
    for(int i = 0; i < len; ++i)
    {
        if(LHS[i] != RHS[i])
        {
            result = 0;
        }
    }

    if(result == 0)
        return false;

    if(result == 1)
        return true;

    return false;
}

int main()
{
    srand(time(NULL));
    int equal;
    do{
        int lengthOfHelloWord = 0;
        for(int i = 0; i < 12; ++i)
        {
            lengthOfHelloWord = lengthOfHelloWord + 1;
        }

        char * helloWorldExpected;
        helloWorldExpected = (char*)malloc(lengthOfHelloWord * sizeof(char));


        for(int i = 0; i < 12; ++i)
        {
            if(i == 0)
            {
                helloWorldExpected[i] = 'H';
            }
            else if(i == 1)
            {
                helloWorldExpected[i] = 'e';
            }
            else if(i == 2)
            {
                helloWorldExpected[i] = 'l';
            }
            else if(i == 3)
            {
                helloWorldExpected[i] = 'l';
            }
            else if(i == 4)
            {
                helloWorldExpected[i] = 'o';
            }
            else if(i == 5)
            {
                helloWorldExpected[i] = ' ';
            }
            else if(i == 6)
            {
                helloWorldExpected[i] = 'W';
            }
            else if(i == 7)
            {
                helloWorldExpected[i] = 'o';
            }
            else if(i == 8)
            {
                helloWorldExpected[i] = 'r';
            }
            else if(i == 9)
            {
                helloWorldExpected[i] = 'l';
            }
            else if(i == 10)
            {
                helloWorldExpected[i] = 'd';
            }
            else if (i == 11)
            {
                helloWorldExpected[i] = '!';
            }
            else
            {

            }
        }

        char * helloWorldResult;
        helloWorldResult = (char*)malloc(lengthOfHelloWord * sizeof(char));

        for(int i = 0; i < lengthOfHelloWord; ++i)
        {
            int r = rand() % 128; // generate a random character
            char currChar;
            currChar = (char)r;
            helloWorldResult[i] = currChar;
        }
        printf(helloWorldResult);
        printf("\n");

        equal = checkEqual(helloWorldResult, helloWorldExpected, lengthOfHelloWord);

        free(helloWorldResult);
        free(helloWorldExpected);
    }while (equal != 1);

    printf("Congratulations! You actually printed Hello World!");
}