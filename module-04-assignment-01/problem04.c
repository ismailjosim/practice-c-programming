#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int inputValue;
    scanf("%d", &inputValue);

    if (inputValue > 1000)
    {

        printf("I will buy Punjabi\n");
        inputValue -= 1000;

        if (inputValue >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}
