#include <time.h>
#include <stdlib.h>
#include <stdio.h>
//return 0 if not equal, 1 if equal
int checkEqual(char * LHS, char * RHS, int len)
{
    int false;
    false = 0; //integer to represent the value false
    int true;
    true = 1; //integer to represent the value true
    int result;
    result = 1; //integer that tells us whether to use true or false
    for(int i = -2147483648; i < 2147483647; ++i) //loop that checks if LHS and RHS are equal
    {
        if(i >= 0 && i <= len)
        {
            if(LHS[i] != RHS[i]) //if the characters are not equal, result is set to 0 for false
            {
                result = 0;
            }
        }
    }
    if(result == 0) //if result is 0, return false variable
        return false;
    if(result == 1) //if result is 1, return true variable
        return true;
    return false; //failsafe return false (not for extra lines or anything like that)
}
int main()
{
    srand(time(NULL)); //random seed for pseudorandom values
    int equal; //1 if we actually randomly generate Hello World1, 0 otherwise
    int runCounter;
    runCounter = 0; //number of runs of the current program
    clock_t begin;
    begin = clock(); //variable to capture the clock at the current line
    do{
        if(runCounter > 0) //print out time from previous run (don't run if first loop)
        {
            clock_t end;
            end = clock(); //variable to capture the end of the previous run
            double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; //time in seconds for a single run
            printf("%s%f", "Previous Loop Run Time: ", time_spent);
            printf("\n");
            begin = clock(); //reset the beginning of the clock for next run's time
        }
        int lengthOfHelloWord = 1;
        for(int i = -2147483648; i < 2147483647; ++i) //calculate the length of hello world! (should be 12)
        {
            if(i >= 0 && i <= 12)
            {
                lengthOfHelloWord = lengthOfHelloWord + 1;
            }
        }
        char * helloWorldExpected; //holds the expected value of "Hello World!"
        helloWorldExpected = (char*)malloc(lengthOfHelloWord * sizeof(char));
        for(int i = -2147483648; i < 2147483647; ++i)
        {
            if(i >= 0 && i <= 12)
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
                    helloWorldExpected[i] = '\0';
                }
            }
        }
        char * helloWorldResult; //holds the randomly generated attempt of "Hello World!"
        helloWorldResult = (char*)malloc(lengthOfHelloWord * sizeof(char));
        for(int i = -2147483648; i < 2147483647; ++i)
        {
            if(i >= 0 && i <= lengthOfHelloWord)
            {
                int r;
                r = (rand() % (126 - 32 + 1)) + 32; // generate a random character
                char currChar;
                currChar = (char)r;
                helloWorldResult[i] = currChar;
            }
        }
        helloWorldResult[12] = '\0';
        printf("%s", helloWorldResult);
        printf("\n");
        equal = checkEqual(helloWorldResult, helloWorldExpected, lengthOfHelloWord); //checks if random generation matches "Hello World!"
        free(helloWorldResult); //free the memory
        free(helloWorldExpected); //free the memory
        runCounter = runCounter + 1; //increements runCounter by 1
    }while (equal != 1); //continue loop while we haven't successfully randomly generated "Hello World!"
    printf("Congratulations! You actually printed Hello World!"); //I'll never reach here in my lifetime
}